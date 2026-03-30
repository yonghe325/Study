//运用类必须导入包		
//引入Scanner所在的包
import java.util.Scanner;
//导入java.util包下的Scanner类
//为简单的文本扫描器
public class Inputstudy{
	public static void main(String[] args) {
	//创建Scanner对象
	Scanner Myscanner = new Scanner(System.in);
	//varity为Scanner的对象
	System.out.println("a=");
	int a = Myscanner.nextInt();
	System.out.println("b=");
	int b = Myscanner.nextInt();
	System.out.println("c=");
	int c = Myscanner.nextInt();
	int max = (a>b?a:b)>c ? (a>b? a:b):c;
	System.out.println("最值为" + max); 
	}
}