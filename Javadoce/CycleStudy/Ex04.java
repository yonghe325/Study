import java.util.Scanner;

public class Ex04{
	public static void main(String[] args) {
		Scanner MyScanner = new Scanner(System.in);
		System.out.println("请输入一个三位数,判断是否为水仙花数");
		int a = MyScanner.nextInt();
		int a100 = a/100;
		int a10  = a%100/10;
		int a1   = a%10;
			System.out.println(a100);
			System.out.println(a10);
			System.out.println(a1);
		
		if (a100 * a100 * a100 + a10 * a10 * a10 + a1 * a1 * a1 == a ) {
			System.out.println("该数为水仙花数");
		}else {
			System.out.println("该数不是水仙花数");
			
		}


			
		
	}
}