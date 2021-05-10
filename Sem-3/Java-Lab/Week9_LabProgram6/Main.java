import CIE.*;
import SEE.*;
import java.util.*;

public class Main{
	public static void main(String[] args){
		int n;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no. of students:");
		n = sc.nextInt();
		CIE.Student st[] = new CIE.Student[n];
		CIE.Internals in[] = new CIE.Internals[n];
		SEE.Externals ex[] = new SEE.Externals[n];

		for(int i=0;i<n;i++){
			st[i] = new CIE.Student();
			in[i] = new CIE.Internals();
			ex[i] = new SEE.Externals();

			st[i].display();
			in[i].display();
			ex[i].display();
			System.out.println("Total Marks of "+st[i].name+"\n");
			for(int j=0;j<5;j++){
				System.out.println(in[i].ciem[j]+ex[i].seem[j]/2);
			}
		}
	}
}
