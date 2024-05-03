// WAP to demonstrate any event handling
import javax.swing.*;
import java.awt.event.*;

class Main {
    static int count = 0;

    public static void main(String[] args) {
        JFrame frame = new JFrame("Event Handling");
        frame.setSize(300, 100);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        JButton button = new JButton("Click me");
        button.setBounds(100, 25, 100, 50);
        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                count += 1;
                JOptionPane.showMessageDialog(null, "Button clicked " + count + " times");
            }
        });
        
        frame.add(button);
        frame.setLayout(null);
        frame.setVisible(true);
    }
}