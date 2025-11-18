import java.util.Scanner;
public class Ifex1{
	public static void main(String[] args) {
		Scanner goalinput = new Scanner(System.in);
		System.out.println("请输入信用分");
		int goal = goalinput.nextInt();
	if (goal>=1 && goal<=100) 
	{
		if ( goal == 100) {
			System.out.println("信用极好");
		} else if (goal>80 & goal<=99 ) {
			System.out.println("信用优秀");
		} else if (goal>=60 & goal<=80) {
			System.out.println("信用一般");
		
		} else {
			System.out.println("信用不合格");
		}
		
	} else {
			System.out.println("重新输入");
	}
	}
}
