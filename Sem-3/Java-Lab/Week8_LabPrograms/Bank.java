import java.util.*;

class Account{
  Scanner in=new Scanner(System.in);
  String cusName,accType;
  long accNumber;
  double balance=9876.5;
  void Accept(){
    System.out.println("Enter name ");
    cusName=in.nextLine();
    System.out.println("Enter Account number");
    accNumber=in.nextLong();
  }
  void deposit(){
    int dep;
    System.out.println("Enter the amount to be deposited");
    dep=in.nextInt();
    balance+=dep;
    System.out.println("Balance = "+balance);
  }
  void withdrawal(){
    int witdr;
    System.out.println("Enter the amount you want to withdraw");
    witdr=in.nextInt();
    balance-=witdr;
    System.out.println("Balance = "+balance);
  }
}
class CurrAct extends Account{
  void penalty(){
  if(balance<2000){
    balance-=400;
    System.out.println("400 penalty for maintainin less than minimum balance");
    System.out.println("Balance = "+balance);
  }
}
}
class SavAct extends Account{
  void interest(){
    double i;
    i=balance*0.05;
    balance+=i;
    System.out.println("Interest = "+i);
    System.out.println("Total Balance = "+balance);
  }
}
class Bank{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter your choice\n1. Savings Account \n2.Current Account");
    int choice=sc.nextInt();

    CurrAct c= new CurrAct();
    SavAct s= new SavAct();

    if(choice==2){
      c.Accept();

      System.out.println("Enter your choice\n1. Deposit\n2. Withdraw");
      int n=  sc.nextInt();

      switch (n) {
        case 1:{
          c.deposit();
          break;
        }
        case 2:{
          c.withdrawal();
          c.penalty();
          break;
        }
        default:System.out.println("Wrong choice!");
      }
    }
    if(choice==1){
      s.Accept();

      System.out.println("Enter your choice\n1. Deposit\n2. Withdraw");
      int n=sc.nextInt();

      switch (n) {
        case 1:{
          s.deposit();
          s.interest();
          break;
        }
        case 2:{
          s.withdrawal();

          break;
        }
        default:System.out.println("Wrong choice!");
      }
    }
  }
}
