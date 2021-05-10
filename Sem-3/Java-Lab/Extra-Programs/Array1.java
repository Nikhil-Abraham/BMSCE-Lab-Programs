import java.util.Scanner;

class Array1 {
    public static void main(String args[]) {
        int n, i;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of elements for the array");
        n = sc.nextInt();

        int[] a = new int[n];
        
        for(i = 0;i<n;i++) {
            System.out.print("Enter value for a["+i+"]");
            a[i] = sc.nextInt();
        }

        int sum1 = 0, sum2 = 0;

        for(i=0;i<n;i+=2) {
            sum1 = sum1 + a[i];
        }

        for(i=1;i<n;i+=2) {
            sum2 = sum2 + a[i];
        }

        System.out.println("Sum os even indices : "+sum1+"\n"+"Sum of odd indices:"+sum2);

    }
}
