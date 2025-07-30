import java.util.Scanner;
public class SwitchEx2{
	public static void main(String[] args) {
		Scanner imforation = new Scanner(System.in);
		System.out.println("请输入成绩");
		int score = imforation.nextInt();
		if (score>=0 & score<=100) {
			int vars = score/60;
			switch (vars) {
			case 1:
				System.out.println("合格");
				break;
			case 0:
				System.out.println("不合格");
				break;
			}	
		} else {
				System.out.println("请重新输入成绩");
		}
	}
}
				
		 	
