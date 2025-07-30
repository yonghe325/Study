import java.util.Scanner;
public class Switch1{
	public static void main(String[] args) {
		Scanner imforations = new Scanner(System.in);		
		System.out.println("请输入变量(a-g)");
		char week = imforations.next().charAt(0);
		switch (week) {
			case 'a':
				System.out.println("周一");
				break;
			case 'b':
				System.out.println("周二");
				break;
			case 'c':
				System.out.println("周三");
				break;
			case 'd':
				System.out.println("周四");
				break;
			case 'e':
				System.out.println("周五");
				break;
			case 'f':
				System.out.println("周六");
				break;
			case 'g':
				System.out.println("周天");
				break;
			default:
				System.out.println("重新输入");
				break;
		}
			System.out.println("停止运行");
	}
}



					




