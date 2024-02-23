abstract class Animal {
    public abstract void animalSound();
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
        myPig.animalSound();
    }
}
