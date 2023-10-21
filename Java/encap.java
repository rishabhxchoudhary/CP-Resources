import java.lang.*;

// class circle{
//     double x,y;
//     double r;

//     circle(double x,double y,double r){
//         this.x=x;
//         this.y=y;
//         this.r=r;
//     }

//     circle(double r){
//         x=0.0;
//         y=0.0;
//         this.r=r;
//     }

//     circle(){
//         x=0.0;
//         y=0.0;
//         r=0.1;
//     }

//     double PrintArea(){
//         return 3.14*r*r;
//     }
// }


class circle{
    double x,y;
    double r;

    circle(double x,double y,double r){
        this.x=x;
        this.y=y;
        this.r=r;
    }

    circle(double r){
        this(0.0,0.0,r);
    }

    circle(circle c){
        this(c.x,c.y,c.r);
    }

    circle(){
        this(0.0,0.0,0.2);
    }

    double PrintArea(){
        return 3.14*r*r;
    }
}

class encap{
    public static void main(String args[]){

        circle c=new circle();

        double ans=c.PrintArea();

        System.out.println("ans:" + ans);

        
        System.out.print("halt");
    }
}