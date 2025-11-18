import java.util,Scanner;

public class Ifex3{
	public static void main(String[] args) {
		Scanner imforations = new Scanner(System.in);		
		System.out.println("请输入月份");
		int month = imforations.nextInt();
		System.out.println("请输入年龄");
		int age = imforations.nextInt();

		if (month>=1 & month<=12 ) {
			if (month>=4 & month<=10) {
				if (age>=18 & age <=60) {
					System.out.println("票价为60");
				} else if (age <18) {
					System.out.println("票价为30");
				} else if (age >60) {
					System.out.println("票价为20");
				} else {
					System.out.println("请重新输入");
				}
			} else {
				if (age>=18 & age<=60) {
					System.out.println("票价为40");
				} else {
					System.out.println("票价为20");
				}
			}
		} else {
			System.out.println("票价为60");
		}



					

					
				

	}
}
					