import javax.swing.*;
import java.awt.*;

public class Main extends JFrame {
    private JPanel panel = new JPanel(new GridBagLayout());

    public Main() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        GridBagConstraints c = new GridBagConstraints();
        c.gridx = 0;
        c.gridy = 0;
        panel.add(new JButton("Button 1"), c);
        c.gridx = 1;
        c.gridy = 0;
        panel.add(new JButton("Button 2"), c);
        c.gridx = 0;
        c.gridy = 1;
        panel.add(new JButton("Button 3"), c);
        c.gridx = 1;
        c.gridy = 1;
        panel.add(new JButton("Button 4"), c);
        
        getContentPane().add(panel);
        setSize(300, 200);
        setVisible(true);
    }

    public static void main(String[] args) {
        new Main();
    }
}
