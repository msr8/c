// // WAP that writes student’s data (enrollment no, name, percentage, phone no.) to a file and then reads the student data back from that file and display it on the console. (Use BufferedInputStream and BufferedOuputStream)
// import java.io.BufferedInputStream;
// import java.io.BufferedOutputStream;
// import java.io.FileInputStream;
// import java.io.FileOutputStream;
// import java.io.IOException;
// import java.util.Scanner;

// class Student {
//     int enrollmentNo;
//     String name;
//     double percentage;
//     long phoneNo;

//     Student(int enrollmentNo, String name, double percentage, long phoneNo) {
//         this.enrollmentNo = enrollmentNo;
//         this.name = name;
//         this.percentage = percentage;
//         this.phoneNo = phoneNo;
//     }

//     public String toString() {
//         return "Enrollment No: " + enrollmentNo + "\nName: " + name + "\nPercentage: " + percentage + "\nPhone No: " + phoneNo;
//     }
// }


// class Main {
//     public static void main(String[] args) {
//         Student s1 = new Student(1, "John Doe", 90.0, 1234567890);

//         // Writing to file
//         try {
//             FileOutputStream     fos = new FileOutputStream("student.txt");
//             BufferedOutputStream bos = new BufferedOutputStream(fos);
//         } catch (IOException e) {
//             e.printStackTrace();
//         }
//     }
// }