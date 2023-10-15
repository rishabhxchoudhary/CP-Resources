import java.lang.*;
import java.util.Scanner;

class armstrong{
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();

        int copy=n;

        int digits=0;
        int sum=0;

        while(n!=0){
            digits=n%10;
            sum+=digits*digits*digits;

            n=n/10;
        }

        if(sum==copy){
            System.out.print("true");
        }

        System.out.println(sum + " " + copy); 



    }
}