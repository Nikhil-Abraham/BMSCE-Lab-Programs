import java.util.Scanner;

class SuperMarket {
    public static void main(String args[]) {
        int n, i;
        System.out.println("Enter Number of items:");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        double[] price = new double[n];
        int[] qty = new int[n];

        for(i=0;i<n;i++) {
            System.out.println("Enter Price of item number "+i+":");
            price[i] = sc.nextDouble();
            System.out.println("Enter Quantity of item number "+i+":");
            qty[i] = sc.nextInt();
        }
        
        
        double totalBill = 0, finalBill = 0, discount;

        for(i=0;i<n;i++) {
            totalBill = totalBill + ( price[i] * qty[i] );
        }

        if(totalBill >= 10000) {
            discount = 0.05 * totalBill;
        }
        else if(totalBill >= 7500) {
            discount = 0.03 * totalBill;
        }
        else if(totalBill >= 5000) {
            discount = 0.02 * totalBill;
        }
        else {
            discount = 0;
        }
       
        System.out.println("Discount = "+discount);

        finalBill = finalBill + (totalBill - discount);

        System.out.print("Final Bill Amount ="+finalBill);
    }
}
