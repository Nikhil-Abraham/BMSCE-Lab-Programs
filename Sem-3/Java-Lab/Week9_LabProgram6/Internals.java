package CIE;
import java.util.*;

public class Internals extends Student{
	public double ciem[];

	public void display(){
		ciem = new double[5];
		Scanner c = new Scanner(System.in);
		System.out.println("Eneter cie marks out of 50:");
		for(int i=0;i<5;i++){
			ciem[i] = c.nextDouble();
		}
	}
}
