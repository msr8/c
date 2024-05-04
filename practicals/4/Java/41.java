// Write a java program to retrieve data from database and display it on GUI
import java.sql.*;
import javax.swing.*;
import java.awt.*;

class Main {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/database", "root", "password");
            Statement statement = connection.createStatement();
            ResultSet resultSet = statement.executeQuery("SELECT * FROM details");

            JFrame frame = new JFrame("Database Data");
            frame.setSize(400, 400);
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.setLayout(new GridLayout(5, 1));

            while (resultSet.next()) {
                JLabel label = new JLabel(resultSet.getString("name") + " " + resultSet.getString("age"));
                label.setHorizontalAlignment(JLabel.CENTER);
                label.setVerticalAlignment(JLabel.CENTER);
                frame.add(label);
            }

            frame.setVisible(true);
            connection.close();
        }
        
        catch (Exception e) {e.printStackTrace();}
    }
}