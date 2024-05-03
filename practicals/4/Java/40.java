// Write a java program to insert and update details data in the database
import java.sql.*;

class Main {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/database", "root", "password");
            Statement statement = connection.createStatement();

            // Insert data
            statement.executeUpdate("INSERT INTO details (name, age) VALUES ('John Doe', 25)");
            System.out.println("Data inserted");

            // Update data
            statement.executeUpdate("UPDATE details SET age = 26 WHERE name = 'John Doe'");
            System.out.println("Data updated");

            connection.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}