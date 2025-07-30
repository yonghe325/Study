public class AssignOperator{
	public static void main(String[] args) {
		double n1 = 10;
		n1 += 4;
		System.out.println("n1=" + n1);
		double n2 = n1 / 3;
		System.out.println("n2=" + n2);
		//复合赋值运算符会进行类型转换
		byte b = 3;
		b += 3;
		//等价于b = (byte)(b + 3)
		System.out.println("b=" + b);
		


		// String s1 = b + "";
		// System.out.println(s1);
		// int c =Integer.parseInt(s1);
		// System.out.println("c=" + c);
	}
}