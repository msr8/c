// WAP that take input from keyboard and write into a file using character stream
import java.io.*;

class Main {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("Please enter a line:");
            String line = br.readLine();
            br.close();
            
            BufferedWriter bw = new BufferedWriter(new FileWriter("output-26.txt"));
            bw.write(line);
            bw.close();
        }
        
        catch (Exception e) {
            System.out.println(e);
        }
    }
}