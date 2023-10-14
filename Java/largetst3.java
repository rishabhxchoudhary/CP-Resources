import java.lang.*;

class largetst3 {
    public static void main(String[] args){
        int x=6;
        int y=7;
        int z=3;

        if(x<y){
            if(y<z){
                System.out.println(z);
            }

            else{
                System.out.println(y);
            }
        }

        else{
            System.out.println(x);
        }
    }
}