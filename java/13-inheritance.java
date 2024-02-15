class Shape {
    public float area() {return 0;}
}

class Circle extends Shape {
    private float radius;

    public Circle(float radius) {this.radius = radius;}

    // It is good practice to write @Override when overriding a method
    // This will throw an error if the method is not actually being overridden,
    // meaning the parent class does not have a method of the same name and parameters
    @Override
    public float area() {
        return (float) (Math.PI * radius * radius);
    }
}



class Main {
    public static void main(String[] args) {
        Circle c = new Circle(5);
        System.out.println(c.area());
    }
}
