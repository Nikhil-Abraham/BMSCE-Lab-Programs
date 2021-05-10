package CIE;
import java.util.*;

public class Student{
	public String name;
	public String usn;
	public int sem;

	public void display(){
		Scanner sc = new Scanner(System.in);
		System.out.println("Name:");
		name = sc.next();
		System.out.println("USN:");
		usn = sc.next();
		System.out.println("Sem:");
		sem = sc.nextInt();
	}

}
