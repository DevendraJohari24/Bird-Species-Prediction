package Doman;


public class outputCode{
    public static void main(String[] args) {
        class1 obj = new class1(5.0);
        obj.shapeName("class1");
        class2 obj2 = new class2(2.0, 3.0, 4.0);
        obj2.shapeName("class2");
    }
}

abstract class Master{
    abstract double area();
    abstract double perimeter();
    public void shapeName(String name){
        System.out.println("The name of Master is : " + name);
    }
}


class class1 extends Master{
    public double radius=0.0;
    private double pi = 3.14;
    public class1(double radius){
        this.radius = radius;
        System.out.println("The area of class1 is " + area());
        System.out.println("The perimeter of class1 is " + perimeter());
    }

    public double area(){
        return radius*radius*pi;
    }

    public double perimeter(){
        return 2*radius*pi;
    }
}

class class2 extends Master{
    public double a=0.0;
    public double b=0.0;
    public double c=0.0;

    public class2(double a, double b, double c){
        this.a = a;
        this.b = b;
        this.c = c;
        System.out.println("The area of class2 is " + area());
        System.out.println("The perimeter of class2 is " + perimeter());
    }

    public double area(){
        return Math.sqrt((perimeter() / 2)*(perimeter()/2 - a)*(perimeter()/2 - b)* (perimeter()/2 -c));
    }

    public double perimeter(){
        return a+b+c;
    }
}