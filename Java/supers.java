import java.lang.*;

class animal{
    String color="red";

    public void display(){
        System.out.println(this.color);
    }
}

class dog extends animal{
    String color="black";

    public void display(){
        System.out.println(color);
        System.out.println(super.color);
    }
}

//red
//black
//red

class supers{
    public static void main(String[] args){
        animal a=new animal();
        dog d=new dog();

        a.display();
        d.display();
    }
}