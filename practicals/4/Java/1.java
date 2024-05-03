// WAP to print the size (in bytes) and range (smallest & largest) of all primitive data types available in JAVA
class Main {
    public static void main(String[] args) {
        System.out.println("Size of byte: " + Byte.BYTES + " bytes");
        System.out.println("Range of byte: " + Byte.MIN_VALUE + " to " + Byte.MAX_VALUE);

        System.out.println("\nSize of short: " + Short.BYTES + " bytes");
        System.out.println("Range of short: " + Short.MIN_VALUE + " to " + Short.MAX_VALUE);

        System.out.println("\nSize of int: " + Integer.BYTES + " bytes");
        System.out.println("Range of int: " + Integer.MIN_VALUE + " to " + Integer.MAX_VALUE);

        System.out.println("\nSize of long: " + Long.BYTES + " bytes");
        System.out.println("Range of long: " + Long.MIN_VALUE + " to " + Long.MAX_VALUE);

        System.out.println("\nSize of float: " + Float.BYTES + " bytes");
        System.out.println("Range of float: " + Float.MIN_VALUE + " to " + Float.MAX_VALUE);

        System.out.println("\nSize of double: " + Double.BYTES + " bytes");
        System.out.println("Range of double: " + Double.MIN_VALUE + " to " + Double.MAX_VALUE);

        System.out.println("\nSize of char: " + Character.BYTES + " bytes");
        System.out.println("Range of char: " + (int) Character.MIN_VALUE + " to " + (int) Character.MAX_VALUE);

        System.out.println("\nSize of boolean: 1 bit");
        System.out.println("Range of boolean: " + Boolean.FALSE + " to " + Boolean.TRUE);
    }
}