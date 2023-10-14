import java.lang.*;
import java.util.Scanner;

class divisibleby3{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int sum=0;
        

        for(int i=0;i<n;i++){
            if(i%2==0 && i%3==0){
                System.out.print(i + " ");
                sum+=i;
            }
        }
        
        System.out.println();
        System.out.println(sum);
    }
}