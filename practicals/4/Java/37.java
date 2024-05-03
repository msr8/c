// Write program that uses swings to display combination of RGB using 3 scrollbars
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Main {
    public static void main(String[] args) {
        JFrame frame = new JFrame("RGB Combination");
        frame.setSize(400, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new GridLayout(4, 1));

        JScrollBar red = new JScrollBar(JScrollBar.HORIZONTAL, 0, 1, 0, 255);
        JScrollBar green = new JScrollBar(JScrollBar.HORIZONTAL, 0, 1, 0, 255);
        JScrollBar blue = new JScrollBar(JScrollBar.HORIZONTAL, 0, 1, 0, 255);

        JLabel label = new JLabel();
        label.setOpaque(true);
        label.setBackground(new Color(0, 0, 0));
        label.setPreferredSize(new Dimension(300, 100));

        red.addAdjustmentListener(new AdjustmentListener() {
            public void adjustmentValueChanged(AdjustmentEvent e) {
                label.setBackground(new Color(red.getValue(), green.getValue(), blue.getValue()));
            }
        });

        green.addAdjustmentListener(new AdjustmentListener() {
            public void adjustmentValueChanged(AdjustmentEvent e) {
                label.setBackground(new Color(red.getValue(), green.getValue(), blue.getValue()));
            }
        });

        blue.addAdjustmentListener(new AdjustmentListener() {
            public void adjustmentValueChanged(AdjustmentEvent e) {
                label.setBackground(new Color(red.getValue(), green.getValue(), blue.getValue()));
            }
        });

        frame.add(red);
        frame.add(green);
        frame.add(blue);
        frame.add(label);
        frame.setVisible(true);
    }
}