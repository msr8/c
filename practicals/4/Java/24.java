// WAP that writes student’s data (enrollment no, name, percentage, phone no.) to a file and then reads the student data back from that file and display it on the console. (Use BufferedInputStream and BufferedOuputStream)
import java.io.*;

class Student implements Serializable {
    int enrollmentNo;
    String name;
    double percentage;
    String phoneNo;

    Student(int enrollmentNo, String name, double percentage, String phoneNo) {
        this.enrollmentNo = enrollmentNo;
        this.name = name;
        this.percentage = percentage;
        this.phoneNo = phoneNo;
    }

    void display() {
        System.out.println("Enrollment No: " + enrollmentNo);
        System.out.println("Name: " + name);
        System.out.println("Percentage: " + percentage);
        System.out.println("Phone No: " + phoneNo);
    }
}


class Main {
    public static void main(String[] args) {
        try {
            String filename = "student.dat";
            Student student = new Student(198719342, "Ajay", 78.92, "9870081734");

            // Write student data to file
            FileOutputStream fileOutputStream = new FileOutputStream(filename);
            BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(fileOutputStream);
            ObjectOutputStream objectOutputStream = new ObjectOutputStream(bufferedOutputStream);
            objectOutputStream.writeObject(student);
            objectOutputStream.close();

            // Read student data from file
            FileInputStream fileInputStream = new FileInputStream(filename);
            BufferedInputStream bufferedInputStream = new BufferedInputStream(fileInputStream);
            ObjectInputStream objectInputStream = new ObjectInputStream(bufferedInputStream);
            Student studentRead = (Student) objectInputStream.readObject();
            objectInputStream.close();

            studentRead.display();
        }
        
        catch (Exception e) {e.printStackTrace();}
    }
}