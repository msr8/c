// Create Adapter class for mousemotion listener
import java.awt.event.*;
import javax.swing.*;
import java.awt.*;

class Main extends JFrame {
    private JLabel label;

    public Main() {
        label = new JLabel("Put your mouse here");

        label.setBackground(new Color(20, 20, 20));
        label.setForeground(new Color(255, 255, 255));
        label.setOpaque(true);

        label.addMouseMotionListener(new MouseMotionAdapter() {
            public void mouseMoved(MouseEvent e) {
                label.setText("Mouse at: X:" + e.getX() + ", Y:" + e.getY());
            }
        });

        label.setHorizontalAlignment(JLabel.CENTER);
        label.setVerticalAlignment(JLabel.CENTER);
        setSize(300, 300);
        label.setBounds(10, 10, 280, 280);
        
        add(label);
        setLayout(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    public static void main(String[] args) {
        new Main();
    }
}