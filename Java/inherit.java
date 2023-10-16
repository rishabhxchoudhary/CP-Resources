import java.lang.*;

class rect2d{
    int x;
    int y;

    rect2d(int x,int y){
        this.x=x;
        this.y=y;
    }

    rect2d(){
        this(1,1);
    }

    public int area(){
        return x*y;
    }
}

class rect3d extends rect2d{

    int z;

    rect3d(int z){
        this.z=z;
    }

    public void display(){
        System.out.println("x: " + x );
        System.out.println("y: " + y );
        System.out.println("z: " + z );
    }

}


class inherit{
    public static void main(String[] args){

        // rect2d r=new rect2d();
    

        // int area=r.area();

        // System.out.println(area);

        rect3d r3=new rect3d(2);

        r3.display();


    }
}