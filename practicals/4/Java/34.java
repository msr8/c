// WAP to make use of BufferedStream to read lines from the keyboard until 'STOP' is typed
import java.io.*;
import java.util.ArrayList;

class Main {
    public static void main(String[] args) {
        String line;
        ArrayList<String> lines = new ArrayList<String>();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        try {
            while (true) {
                line = br.readLine();
                if (line.equals("STOP")) {break;}
                lines.add(line);
            }
            br.close();
        }
        catch (Exception e) {System.out.println(e);}

        System.out.println("\nThe lines you entered are:");
        for (String l : lines) {
            System.out.println(l);
        }
    }
}