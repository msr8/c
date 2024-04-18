// WAP to demonstrate run-time polymorphism
class Animal {
    public void sleep() {
        System.out.println("Animal is sleeping");
    }
}

class Cat extends Animal {
    @Override
    public void sleep() {
        System.out.println("Cat is sleeping");
    }
}

class Main {
    public static void main(String[] args) {
        Animal obj = new Cat();
        obj.sleep();
    }
}