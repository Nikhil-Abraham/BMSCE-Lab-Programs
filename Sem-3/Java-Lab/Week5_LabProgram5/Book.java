import java.util.*;

class Book{
	String name, author;
	int price, num_pages;

	Book(){
		this.name = name;
		this.author = author;
		this.price = price;
		this.num_pages = num_pages;
	}

  void input(){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter name of Book");
		name = sc.nextLine();
		System.out.println("Enter name of author\n");
		author = sc.nextLine();
		System.out.println("Enter number of pages of ");
		num_pages = sc.nextInt();
		System.out.println("Enter Price \n");
		price = sc.nextInt();

	}

	public String toString(){
		String output;
		output="Book Name: "+name+"\nAuthor: "+author+"\nPrice: "+price+"\nPages: "+num_pages;
		return output;
	}

}


class BookMain{
	public static void main(String[] args){
		int n;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of books");
		n = sc.nextInt();
		String details;

		Book[] b = new Book[n];
		for(int i=0;i<n;i++){
			b[i] = new Book();

			b[i].input();
		}

		for(int i=0;i<n;i++){

			System.out.println(b[i]);
		}
	}
}
