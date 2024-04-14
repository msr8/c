abstract class Animal {
    // Pure virtual function
    public abstract void animalSound();
    // Impure virtual function
    public void sleep() {
        System.out.println("Animal is sleeping");
    }
}

class Pig extends Animal {
    @Override
    public void animalSound() {
        System.out.println("The pig says: wee wee");
    }
}


class Main {
    public static void main(String[] args) {
        Pig myPig = new Pig();
        myPig.animalSound(); // The pig says: wee wee
        myPig.sleep(); // Animal is sleeping
    }
}
