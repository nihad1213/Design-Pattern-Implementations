FROM openjdk:17

WORKDIR /app

COPY app /app

# Install wget
RUN apt-get update && apt-get install -y wget

# Download MySQL JDBC driver
RUN wget https://repo1.maven.org/maven2/com/mysql/mysql-connector-j/8.3.0/mysql-connector-j-8.3.0.jar

# Compile Java source files
RUN javac -cp .:mysql-connector-j-8.3.0.jar *.java

# Run application
CMD ["java", "-cp", ".:mysql-connector-j-8.3.0.jar", "Main"]