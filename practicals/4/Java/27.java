// WAP to use Byte stream class to read from a text file and display the content on the output screen
import java.io.*;

class Main {
    public static void main(String[] args) {
        try {
            FileInputStream fis = new FileInputStream("output-26.txt");
            int i;
            
            while (true) {
                i = fis.read();
                if (i == -1) {break;}
                System.out.print((char) i);
            }
            fis.close();
        }
        
        catch (Exception e) {
            System.out.println(e);
        }
    }
}