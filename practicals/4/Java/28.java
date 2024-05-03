// WAP to use Byte stream class to read form a text file and copy the content to another text file
import java.io.*;

class Main {
    public static void main(String[] args) {
        try {
            FileInputStream  fis = new FileInputStream("output-26.txt");
            FileOutputStream fos = new FileOutputStream("output-28.txt");
            int i;
            
            while (true) {
                i = fis.read();
                if (i == -1) {break;}
                fos.write(i);
                System.out.print( (char)i );
            }
            
            fis.close();
            fos.close();
        }
        
        catch (Exception e) {
            System.out.println(e);
        }
    }
}