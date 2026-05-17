FROM eclipse-temurin:21-jdk-alpine

WORKDIR /app

# Install wget
RUN apk add --no-cache wget

# Download MySQL JDBC driver
RUN wget https://repo1.maven.org/maven2/com/mysql/mysql-connector-j/8.3.0/mysql-connector-j-8.3.0.jar

# Copy your local "app" directory into a matching nested folder layout
COPY app /app/Singleton/Java/app

# Explicitly point the CLASSPATH to the root (/app) and the jar file
ENV CLASSPATH=.:/app:/app/mysql-connector-j-8.3.0.jar

# Compile from the root directory using the full path
RUN javac /app/Singleton/Java/app/*.java

# Execute using the Fully Qualified Class Name
CMD ["java", "Singleton.Java.app.Main"]