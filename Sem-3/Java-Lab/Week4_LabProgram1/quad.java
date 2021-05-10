import java.util.Scanner;
class Quad {
    public static void main(String args[]) {
        double a,b,c;
        System.out.println("Enetr Coeffecients of x^2 , x and constant term");
        Scanner sc = new Scanner(System.in);
        
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();
        
        double det, sol1, sol2;

        det = (b*b) - (4*a*c);
        if(det<0) {
            System.out.println("No Real Roots");
            System.exit(0);
        }
        System.out.println("The Roots are Real");
        sol1 = ((-b) + Math.sqrt(det))/(2*a);
        sol2 = ((-b) - Math.sqrt(det))/(2*a);

        System.out.println("The Solutions of the Quadratic Equaltion are : \n"+sol1+"\n"+sol2);

    }
}
