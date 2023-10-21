import java.util.Scanner;

class Question{
    Scanner sc=new Scanner(System.in);
    int a=sc.nextInt();
    int b=sc.nextInt();
}


public class access{
// Define static method swap()to swap the values of e1 and e2 of class Question.

public static void swap(Question t){
    int temp=t.a;
    t.a=t.b;
    t.b=temp;
}
public static void main(String[] args) {
    Question t=new Question();
  //Call the method swap()
    swap(t);

System.out.println(t.a+" "+t.b);    
  }
}