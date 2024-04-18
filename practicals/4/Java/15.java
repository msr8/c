// WAP to implement abstract classes
abstract class Animal {
    abstract void sleep();
}

class Cat extends Animal {
    @Override
    void sleep() {
        System.out.println("Cat is sleeping");
    }
}

class Main {
    public static void main(String[] args) {
        Animal obj = new Cat();
        obj.sleep();
    }
}