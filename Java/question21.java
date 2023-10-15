import java.lang.*;

public class question21{ 
    public static void main(String[] args) { 
		// Object of the main class is created
		question21 q = new question21();
		// Print method on object of Question class is called
		q.studentMethod();
    }
	
	// 'print()' method is defined in class Question
	void print(question21 object){
		System.out.print("Well Done!");
	}
    void studentMethod(){
        // Call the method named 'print()' in class Question
        print(this);
    }
}
