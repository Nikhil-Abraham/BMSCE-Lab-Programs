import java.util.Scanner;

class Array3 {
    public static void main(String args[]) {
        int n, i;
        System.out.println("Enter number elements of the Array");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int[] A = new int[n];
        
        for(i=0;i<n;i++) {
            System.out.println("Enter element "+i+":");
            A[i] = sc.nextInt();
        }

        int oddCount = 0, evenCount =0;
        for(i=0;i<n;i++) {
            if(A[i]%2==0) {
                evenCount++;
            }
            else {
                oddCount++;
            }   
        }
        int[] B = new int[oddCount];
        int[] C = new int[evenCount];

        int x = 0, y = 0;

        for(i=0;i<n;i++) {
            if(A[i]%2==0) {
                C[x++] = A[i];
            }
            else {
                B[y++] = A[i];
            }
        }
        int sum = 0, max, min;    
        double avg;
        
        max = C[0];
        min = C[0];
        //System.out.println("Flag1");
        for(i=0;i<evenCount;i++) {
            sum = sum + C[i];
            if(C[i]>max) {
                max = C[i];
            }
            //System.out.println("Flag 2");
            if(C[i]<min) {
                min = C[i];
            }
        }

        avg = sum/evenCount;
        
        System.out.println("Sum ="+sum+"\nMax ="+max+"\nMin ="+min+"\nAverage ="+avg);
        
    }
}
