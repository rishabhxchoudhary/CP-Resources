import java.lang.*;

class Circle1{
    double x,y;
    double r;

    double calcArea(){
        double area=3.14*r*r;
        return area;
    }

    double calcPeri(){
        double peri=2*3.14*r;
        return peri;
    }
}

class circle{
    public static void main(String[] args){
        Circle1 c=new Circle1();

        c.x=0.0;
        c.y=0.0;
        c.r=7;

        double area=c.calcArea();
        double circum=c.calcPeri();

        System.out.println("Area: " + area);
        System.out.println("circum: " + circum);


    }
}