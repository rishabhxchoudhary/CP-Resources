import java.lang.*;

abstract class base{
    base(){
        System.out.println("this");
    }

    void fun(){
        System.out.println("this, is a method called in a abstract class");
    }
}

class box extends base{
    box(){
        super();
        super.fun();

    }

    public void fun(){
        System.out.println("this, is a method called in a box class");
    }
}

class abstracti{
    public static void main(String[] args){

        base b=new base();
    

        // box b=new box();÷

        b.fun();
        
    }
}