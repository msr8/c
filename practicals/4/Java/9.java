// WAP that makes use of StringBuffer class methods
class Main {
    public static void main(String[] args) {
        StringBuffer x = new StringBuffer("Hello World");

        System.out.println(x); // Hello World
        System.out.println(x.length()); // 11
        System.out.println(x.capacity()); // 16
        System.out.println(x.reverse()); // dlroW olleH
        System.out.println(x.append("!!!")); // dlroW olleH!!!
        System.out.println(x.insert(5, "!!!")); // dlroW!!! olleH!!!
        System.out.println(x.delete(5, 8)); // dlroW olleH!!!
        System.out.println(x.deleteCharAt(5)); // dlro olleH!!!
        System.out.println(x.replace(5, 8, "!!!")); // dlro!!! olleH!!!
        System.out.println(x.substring(5)); // !!! olleH!!!
        System.out.println(x.substring(5, 8)); // !!!
        System.out.println(x.indexOf("olleH")); // 8
        System.out.println(x.indexOf("olleh")); // -1
        System.out.println(x.charAt(5)); // !
        System.out.println(String.format("Hello %s", "World")); // Hello World
    }
}