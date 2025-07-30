import java.util.Scanner;
public class MulForEx01{
	public static void main(String[] args) {
		Scanner score = new Scanner(System.in);
			double suns = 0 ;
			int number =0;
		for (int classes =1;classes <= 3 ;classes++ ) {
			double sun = 0;
			System.out.println("第" + classes + "班级,请输入成绩");
			
				
			
			for (int i =1;i <=5 ;i++ ) {
				int num = 0;
				System.out.println("第" + i + "名同学成绩为");
				num = score.nextInt();
				if (num<=100 & num >=0) {
					sun += num;
					if (num>=60) {
						number++;
					}
	
				} else {
					System.out.println("请重新输入");
					break;
				}

			}
//System.out.print("sun=" + sun + "======");

			double average_score = sun/5;
			System.out.println("第" + classes + "班的平均分为" + average_score);
			System.out.println("第" + classes + "班有" + number + "名同学及格");
			number = 0;
			suns = sun + suns;
//System.out.print("suns=" + suns + "======");	
					
	
			}
			double TAverageScore = suns/15;
			System.out.println("总平均分为" + TAverageScore );
		}
	}


				
			