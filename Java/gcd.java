import java.lang.*;

class gcd{

    public int calc(int n,int m){

        if(m>n) return calc(m,n);
        if(m==n) return n;
        if(m==0) return n;
        if(m==1) return 1;

        return gdc(n%m, n);


    }

    public static void main(string[] args){
        



    }
}