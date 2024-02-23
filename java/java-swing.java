import javax.swing.*;

class Main extends JFrame {
    static JFrame myFrame;
    static JButton myButton;
    static JTextField myTextField;
    static JLabel myLabel;


    public static void main(String[] args) {
        myFrame = new JFrame("My First GUI");
        myButton = new JButton("Click me");
        myTextField = new JTextField();
        myLabel = new JLabel("Hello World!");

        myButton.setBounds(100, 100, 100, 40);
        myTextField.setBounds(100, 150, 100, 40);
        myLabel.setBounds(100, 200, 100, 40);

        myFrame.add(myButton);
        myFrame.add(myTextField);
        myFrame.add(myLabel);

        myFrame.setSize(300, 300);
        myFrame.setLayout(null);
        myFrame.setVisible(true);
    }
}