// https://www.w3schools.com/java/java_ref_string.asp
class Main {
    public static void main(String[] args) {
        String x = "Hello World";

        System.out.println(x); // Hello World
        System.out.println(x.length()); // 11
        System.out.println(x.toUpperCase()); // HELLO WORLD
        System.out.println(x.toLowerCase()); // hello world
        System.out.println(x.indexOf("World")); // 6
        System.out.println(x.indexOf("world")); // -1
        System.out.println(x.substring(6)); // World
        System.out.println(x.substring(6, 8)); // Wo
        System.out.println(x.replace("World", "Universe")); // Hello Universe
        System.out.println(x.replace("world", "Universe")); // Hello World
        System.out.println(x.concat("!!!")); // Hello World!!!
        System.out.println(x + "!!!"); // Hello World!!!
        System.out.println(x.charAt(1)); // e
        System.out.println(x + 14); // Hello World14
        System.out.println(14 + x); // 14Hello World
        System.out.println(String.format("Hello %s", "World")); // Hello World
       
        String[] y = x.split("r");
        System.out.println(y[0]); // Hello Wo
        System.out.println(y[1]); // ld
    }
}