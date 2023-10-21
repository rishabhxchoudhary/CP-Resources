import java.lang.*;

class box{
    int l;
    int b;
    int h;

    box(int l,int b,int h){
        this.l=l;
        this.b=b;
        this.h=h;
    }

    box(){
        l=0;
        b=0;
        h=0;
    }

    public void display(){
        System.out.println(l);
        System.out.println(b);
        System.out.println(h);
    }
}

class boxweight extends box{
    int w;

    boxweight(){
        super();
        this.w=0;
    }

    boxweight(int l,int b,int h,int w){
        super(l,b,h);
        this.w=w;
    }

    public void display(){
        super.display();
        System.out.println(w);
    }
}

class superi{
    public static void main(String[] args){

        boxweight bw=new boxweight(1,2,4,5);

        box b=new box(1,2,3);
        b.display();

        b=bw;
        
        b.display();

        // bw.display();


        // bw.display();
        
        
    }
}