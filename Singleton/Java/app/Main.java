package Singleton.Java.app;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.Statement;

public class Main {
    
    public static void main(String[] args) {

        try {
            Connection connection = DBConnector.getInstance().getConnection();
            Statement statement = connection.createStatement();

            statement.execute("""
                CREATE TABLE IF NOT EXISTS users (
                id INT AUTO_INCREMENT PRIMARY KEY,
                name VARCHAR(255) NOT NULL)""");

            statement.execute("""
                INSERT INTO users(name)
                VALUES ('Nihad')""");

            ResultSet resultSet = statement.executeQuery("SELECT * FROM users");

            while (resultSet.next()) {
                System.out.println("ID: " + resultSet.getInt("id"));
                System.out.println("NAME: " + resultSet.getString("name"));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
