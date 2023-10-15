import java.lang.*;
import java.util.Scanner;

class avg{
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();

        int arr[]= new int[n]; 

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        double avg;
        int max=0;
        int min=10000;
        int sum=0;

        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(arr[i]>max){
                max=arr[i];
            }

            if(arr[i]<min){
                min=arr[i];
            }
        }

        avg=sum/n;

        System.out.println("avg:" + avg);
        System.out.println("max:" + max);
        System.out.println("min:" + min);
        


    }
}