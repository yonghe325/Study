import java.util.Scanner;
public class F_sequence{
	public static void main(String[] args) {
		Scanner MyScanner = new Scanner(System.in);
		
		System.out.println("定义项数");
		int a = MyScanner.nextInt();
		int[] F_sequence = new int[a];
		System.out.println("定义首项");
		int F_sequence[0] = MyScanner.nextInt();
		System.out.println("定义第二项");
		int F_sequence[1] = MyScanner.nextInt();

		int sum = 0;
		

		for (int i = 2; i<F_sequence.length ;i++ ) {
			F_sequence[i] = F_sequence[i-1] + F_sequence[i-2];
		} 
		
		for (int i = 0; i<F_sequence.length ; i++ ) {
		 	sum +=F_sequence[i];
			System.out.println("第" + (i +1) + "项为" + F_sequence[i]);
		}
			System.out.println("总和=" + sum);
	}
}
			
		 	