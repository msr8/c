// Write a program to implement border layout using Swing
import javax.swing.*;
import java.awt.*;

class Main {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Border Layout");
        frame.setSize(400, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new BorderLayout());

        JLabel north = new JLabel("North");
        north.setHorizontalAlignment(JLabel.CENTER);
        north.setVerticalAlignment(JLabel.CENTER);

        JLabel south = new JLabel("South");
        south.setHorizontalAlignment(JLabel.CENTER);
        south.setVerticalAlignment(JLabel.CENTER);

        JLabel east = new JLabel("East");
        east.setHorizontalAlignment(JLabel.CENTER);
        east.setVerticalAlignment(JLabel.CENTER);

        JLabel west = new JLabel("West");
        west.setHorizontalAlignment(JLabel.CENTER);
        west.setVerticalAlignment(JLabel.CENTER);

        JLabel center = new JLabel("Center");
        center.setHorizontalAlignment(JLabel.CENTER);
        center.setVerticalAlignment(JLabel.CENTER);

        frame.add(north, BorderLayout.NORTH);
        frame.add(south, BorderLayout.SOUTH);
        frame.add(east, BorderLayout.EAST);
        frame.add(west, BorderLayout.WEST);
        frame.add(center, BorderLayout.CENTER);
        frame.setVisible(true);
    }
}