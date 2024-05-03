// WAP to demonstrate multi-level and hierarchical inheritance

// Multilevel
class A {
    void printA() {System.out.println("A");}
}
class B extends A {
    void printB() {System.out.println("B");}
}
class C extends B {
    void printC() {System.out.println("C");}
}

// Hierarchical
class D {
    void printD() {System.out.println("D");}
}
class E extends D {
    void printE() {System.out.println("E");}
}
class F extends D {
    void printF() {System.out.println("F");}
}


class Main {
    public static void main(String[] args) {
        C obj1 = new C();
        obj1.printA();
        obj1.printB();
        obj1.printC();

        System.out.println();

        E obj2 = new E();
        obj2.printD();
        obj2.printE();

        System.out.println();

        F obj3 = new F();
        obj3.printD();
        obj3.printF();
    }
}
