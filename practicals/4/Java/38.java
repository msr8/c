// Write a swing application that uses at least 5 swing controls
import javax.swing.*;
import java.awt.*;

class Main {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Swing Controls");
        frame.setSize(400, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new GridLayout(5, 1));

        JLabel label = new JLabel("This is a label");
        label.setHorizontalAlignment(JLabel.CENTER);
        label.setVerticalAlignment(JLabel.CENTER);

        JTextField textField = new JTextField("This is a text field");

        JButton button = new JButton("This is a button");

        JCheckBox checkBox = new JCheckBox("This is a check box");

        JRadioButton radioButton = new JRadioButton("This is a radio button");

        frame.add(label);
        frame.add(textField);
        frame.add(button);
        frame.add(checkBox);
        frame.add(radioButton);
        frame.setVisible(true);
    }
}