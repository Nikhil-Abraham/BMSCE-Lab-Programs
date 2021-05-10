import java.util.Scanner;

class Array2 {
    public static void main(String args[]) {
        int n, i;
        System.out.println("Enter Size of Array");
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();

        int[] a = new int[n];
        for(i=0;i<n;i++) {
            System.out.println("Enetr element os a["+i+"]: " );
            a[i] = sc.nextInt();
        }
        int positive =0, negative =0, zero =0;

        for(i=0;i<n;i++) {
            if(a[i]>0) {
                positive++;
            }
            else if(a[i]<0) {
                negative++;
            }
            else {
                zero++;
            }
        }

        System.out.println("Number of positive elements :"+positive+"\nNumber of negative elements :"+negative+"\nNumber of Zero elements :"+zero);

        
    }
}
