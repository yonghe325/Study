//三元运算符?
//其本质为if else
//if条件表达式为true,运算结果为表达式1
//if条件表达式为false,运算结果为表达式2

//或可以自动转换 
public class TernaryOperator{
	public static void main(String[] args) {
		//前++,先运算,先返回
		//后--,先返回,后运算
		int a = 10;
		int b = 90;
		int c = a>b ? ++a:++b;
		//返回++b
		System.out.println("=========================");
			System.out.println("c=" + c);		
			System.out.println("a=" + a);
			System.out.println("b=" + b);

		
		//--同理
		System.out.println("=========================");
		int x = 10;
		int y = 90;
		int z = x>y ? x--:y--;
		//返回y--,先返回y的值,在运算y--
		//z = 90
		//y = 98
		System.out.println("x=" + x);
		System.out.println("y=" + y);	
//cba数据类型要匹配	
//或可以自动转换 
		System.out.println("=========================");
		int v1 = 10;
		int v2 = 90;
		double v3 = v1>v2 ? 1.1:1.2;
		//int v3 = v1>v2 ? (int)1.1:(int)1.2;
		System.out.println("v1=" + v1);		
		System.out.println("v2=" + v2);
		System.out.println("v3=" + v3);
		
				
	}
}	

