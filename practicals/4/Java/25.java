// WAP that accept two file names as command line arguments. Copy only those lines from the first file to second file which contains the word “Computers”. Also count number of words in first file
import java.io.*;

class Main {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new FileReader(args[0]));
            BufferedWriter bw = new BufferedWriter(new FileWriter(args[1]));
            String line;

            int count = 0;
            while (true) {
                line = br.readLine();
                if (line == null) {break;}
                count += line.split(" ").length;

                if (line.contains("Computers")) {
                    bw.write(line);
                    bw.newLine();
                }
            }
            
            br.close();
            bw.close();
            System.out.println("Number of words in first file: " + count);
        }
        
        catch (Exception e) {
            System.out.println(e);
        }
    }
}