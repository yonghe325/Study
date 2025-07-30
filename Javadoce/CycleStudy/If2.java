import java.util.Scanner;

public class If2{
	public static void main(String[] args) {
		Scanner varitys = new Scanner(System.in);
			System.out.println("a=");
		int a = varitys.nextInt();
		if (a==10) {
			System.out.println("猜对了");
		} else if (a==1314 | a==520) {
			System.out.println("love");
			int hide = 1919810;
			System.out.println("hide=" + hide);

		} else {
			System.out.println("再试一次");

		}
	}
}