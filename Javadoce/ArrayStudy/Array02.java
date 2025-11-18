//数组的动态初始化1,先创建,后声明(赋值)
import java.util.Scanner;
public class Array02{
	public static void main(String[] args) {
		
		// double[] scores = new double[5];
		// //声明数组,并分配5空间
		// //未定义的元素默认为零

		double[] scores;
		//声明数组为空
		scores = new double[5];
		//分配空间		
		
		Scanner MyScanner = new Scanner(System.in);
		
		for (int i = 0;i<scores.length ;i++ ) {
			System.out.println("请输入第" + (i+1) + "个元素的值");
			scores[i] = MyScanner.nextDouble();
			//通过遍历将空数组赋值
		}
		
		for (int i = 0;i<scores.length ;i++ ) {
			System.out.println("第" + (i+1) + "个元素的值=" + scores[i]);
		//通过遍历输出数组的各个元素
		}
	}
}

