// Create a class `employee` which have name, age and address of employee, include methods `getdata()` and `showdata()`. `getdata()` takes the input from the user, and `showdata()` display the data in following format:
// Name: 
// Age: 
// Address:
import java.io.*;

class employee {
    String name;
    int age;
    String address;

    void getdata() {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            System.out.print("Please enter the name of the employee: ");
            name = br.readLine();
            System.out.print("Please enter the age of the employee: ");
            age = Integer.parseInt(br.readLine());
            System.out.print("Please enter the address of the employee: ");
            address = br.readLine();
            br.close();
        }
        catch (Exception e) {System.out.println(e);}
    }

    void showdata() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Address: " + address);
    }
}


class Main {
    public static void main(String[] args) {
        employee e = new employee();
        e.getdata();
        System.out.println();
        e.showdata();
    }
}