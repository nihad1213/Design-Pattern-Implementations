package Singleton.Java.app;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DBConnector {
    
    private static volatile DBConnector instance;

    private Connection connection;

    private static final String DB_URL = System.getenv("DB_URL");
    private static final String DB_USER = System.getenv("DB_USER");
    private static final String DB_PASSWORD = System.getenv("DB_PASSWORD");

    private DBConnector() {
        int maxRetries = 10;
        int retryDelayMs = 3000;

        for (int attempt = 1; attempt <= maxRetries; attempt++) {
            try {
                connection = DriverManager.getConnection(DB_URL, DB_USER, DB_PASSWORD);
                System.out.println("Database connection established successfully.");
                return;
            } catch (SQLException e) {
                if (attempt == maxRetries) {
                    throw new RuntimeException("Failed to connect to the database after " + maxRetries + " attempts", e);
                }
                System.out.println("Connection attempt " + attempt + " failed. Retrying in " + (retryDelayMs / 1000) + "s...");
                try {
                    Thread.sleep(retryDelayMs);
                } catch (InterruptedException ie) {
                    Thread.currentThread().interrupt();
                    throw new RuntimeException("Interrupted while waiting to retry database connection", ie);
                }
            }
        }
    }

    public static DBConnector getInstance() {

        if (instance == null) {

            synchronized (DBConnector.class) {

                if (instance == null) {
                    instance = new DBConnector();
                }
            }
        }

        return instance;
    }

    public Connection getConnection() {
        return connection;
    }
}