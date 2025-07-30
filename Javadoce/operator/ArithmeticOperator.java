public class ArithmeticOperator{
	//算术运算符
	public static void main(String[] args) {
//除法
		System.out.println(10 / 4);
		//原本为2.5,但输出2,取整数
		System.out.println(10.0 / 4);
		//保留0.1位,输出2.5
		double d = 10 / 4;
		System.out.println(d);
		//d = 2,利用double提高精度,输出2.0 

		System.out.println(10 % 3);
		//输出1,取模
		System.out.println(-10 % 3);
		//输出-1,取模
		System.out.println(10 % -3);
		//输出+1
		//a % b = a - a/b*b
		//-10 % 3 = -10 - (-10) / 3 * 3 
        //		  = -10 + 9
        //   	  = -1
		//10 % -3 = 10 - 10 / (-3) * (-3)
		// 		  = 10 - 9
		//		  = 1 
		System.out.println(-10 % -3);
		//输出 -1
		System.out.println("======");
//++,--
	//独立使用
		int i = 10;
		i++;//自增,i = i + 1
		//如果作为独立语句使用,++i等价于++i
		System.out.println("i=" + i);//11
		++i;
		System.out.println("i=" + i);//12
	//表达式使用
	  //前++
		int j = 8;
		int k = ++j;
		System.out.println("j=" + j + "\n" + "k=" + k);
		//等价 j = j +1 再 k = j = 9
	  //后++
		int m = 8;
		int n = m++;
		System.out.println("m=" + m + "\n" + "n=" + n);
		//等价 n = m =8 再 m = m + 1
		System.out.println("======");
	  
	  //特殊
		//在关系运算中,后++/后--先比较再自增/减
		int x = 5;
		int y = 5;
		if (x++ == 6 & ++y == 6) {
			x = 11;
		}
		System.out.println("x=" + x + "\n" + "y=" + y);
		//x=5 y=6
		
		int self1 = 5;
		self1 = self1++;
		// 1 temp(临时变量) = 5
		// 2 self1 = self1 + 1 = 6
		// 3 self1 = temp = 5
		//后自加
		System.out.println(self1);//5

		int self2 = 5;
		self2 = ++self2;
		// 1 self2 = self + 1 = 6
		// 2 temp(临时变量) = self
		// 3 self2 = temp = 6
		//先自加
		System.out.println(self2);//6



	}
}