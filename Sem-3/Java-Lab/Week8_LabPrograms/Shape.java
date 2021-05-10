abstract class Shape {
    static int parameter1 = 7;
    static int parameter2 = 6;

    abstract void printArea();
}

class Rectangle extends Shape {
    public int area;

    @Override
    public void printArea() {
        area = parameter1*parameter2;
        System.out.println("Area = "+area);
    }
}

class Triangle extends Shape {
    int area_T;

    @Override
    public void printArea() {
        area_T = (int)(0.5*parameter1*parameter2);
        System.out.println("Area = "+area_T);
    }
}

class Circle extends Shape {
    int area_C;

    @Override
    public void printArea() {
        area_C = (int)(3.14*parameter1*parameter1);
        System.out.println("Area = "+area_C);
    }
}

class AreaShape {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle();
        r1.printArea();
        Triangle t1 = new Triangle();
        t1.printArea();
        Circle c1 = new Circle();
        c1.printArea();
    }
}