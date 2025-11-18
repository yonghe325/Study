import java.util.Scanner;
public class Ifex2{
	public static void main(String[] args) {
		Scanner imforations = new Scanner(System.in);
		System.out.println("请输入成绩");
		double goal = imforations.nextDouble();
		if (goal>=8.0 & goal<=12) {
			System.out.println("请输入性别");
			char gender = imforations.next().charAt(0);
			if (gender == '男') {
				System.out.println("进入男子组");
			} else if (gender == '女') {
				System.out.println("进入女子组");
			} else {
				System.out.println("重新输入");
			}
		} else if (goal<0 | goal>12) {
			System.out.println("重新输入");
		} else{
			System.out.println("已被淘汰");
		}

	}
}	
				