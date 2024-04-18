// WAP to create random access file and read & write integer data in it
import java.io.RandomAccessFile;

class Main {
    public static void main(String[] args) {
        try {
            RandomAccessFile file = new RandomAccessFile("file.txt", "rw");
            int x = 10;

            file.writeInt(x);
            file.seek(0);
            System.out.println(file.readInt());

            file.close();
        }
        catch (Exception e) {
            System.out.println("An error occurred");
        }
    }
}