import java.lang.*;

class arr3d{
    public static void main(String[] args){
        
        int array[][][]= new int[3][3][3];
        int n=3;
        int m=3;
        int o=3;


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int k=0;k<o;k++){
                    array[i][j][k]= i*j*k;
                }
            }
        }
    
    
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int k=0;k<o;k++){
                    System.out.print(array[i][j][k]);
                    System.out.print(" ");
                }
            System.out.println();
            }
            System.out.println();
        }
    

    
    
    }


}