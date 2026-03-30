public class doubles{
	public static void main(String[] args) {
	double n1 = 3.1415;//双精度
	float n2 = 3.14159F;//单精度
	//float类型变量后需要加F或f

	System.out.println(n1);	
	System.out.println(n2);
	double n3 = 0.123;
	double n4 = .123;
	System.out.println(n3);	
	System.out.println(n4);
	//个位为零可以省略

	double n5 = 123E-2;
	double n6 = 0.0123e2;
	System.out.println(n5);	
	System.out.println(n6);
	/*科学计数法表示
	ex=10的x次方
	Ex=10的-x次方*/

	double n7 =3.14159261110;//小数点后全保存
	float n8 =3.1415926110F;//有4舍5入
	System.out.println(n7);	
	System.out.println(n8);
	//double类型更精准

	double n9 =2.7;//小数2.7
	double n10 = 8.1 / 3;//接近2.7，即使能整除，计算机问题，非数学问题
	System.out.println(n9);	
	System.out.println(n10);
	//不要用运算后的小数比较
	//有浮点数使用陷阱X-X
	if (n9 == n10) {
		System.out.println("相等");
	}
	//不会输出“相等”
	//用误差来算,两数差值在范围内即可认为相等
	if (Math.abs(n9 - n10) < 0.000001) {
		System.out.println(Math.abs(n9 - n10));
		n10 = n9;
		System.out.println(n10);
		System.out.println("n9,n10相等");
	}	
	}
}

