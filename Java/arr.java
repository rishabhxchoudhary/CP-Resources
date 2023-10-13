import java.lang.*;

class arr{
    public static void main(String[] args){
        int arr[]={10,20,30,10};

        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }

        int n=arr.length;

        int sum=0;

        for(int i=0;i<n;i++){
            sum+=arr[i];
        }

        int avg=sum/n;

        System.out.println("string: "+ avg );

    }
}