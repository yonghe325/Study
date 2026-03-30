public class StringToBasic{
	public static void main(String[] args) {
//变量转为字String
		int i1 = 100;
		double d1 = .546;
		float f1 = .321F;
		char c1 = '勇';
		char c2 = 97;
		boolean b1 = true;
		String s1 = i1 + "";
		String s2 = d1 + "";
		String s3 = f1 + "";
		String s4 = c1 + "";
		String s5 = c2 + "";
		String s6 = b1 + "";
		System.out.println(s1);
		System.out.println(s2);
		System.out.println(s3);
		System.out.println(s4);
		System.out.println(s5);
		System.out.println(s6);

		System.out.println("====================\n====================");

//String转基本变量需调用包装类parseXX
		//String s7 = "张勇";
		String s7 = "101";
		int n1 = Integer.parseInt(s7);
		double n2 =  Double.parseDouble(s7);
		float n3 = Float.parseFloat(s7);
		long n4 = Long.parseLong(s7);
		byte n5 = Byte.parseByte(s7);
		short n7 = Short.parseShort(s7);

		boolean n6 = Boolean.parseBoolean("true");

		System.out.println(n1);
		System.out.println(n2);
		System.out.println(n3);
		System.out.println(n4);
		System.out.println(n5);
		System.out.println(n6);
		System.out.println(n7);
		//string转char取string中的一个字符
		System.out.println("char1=" + s7.charAt(0));
		System.out.println("char2=" + s7.charAt(1));
		System.out.println("char3=" + s7.charAt(2));




	}
}
class STBDetail{
	public static void main(String[] args) {
		String str = "123";
		char s1 = str.charAt(0);
		char s2 = str.charAt(1);
		char s3 = str.charAt(2);
		System.out.println(s1);
		System.out.println(s2);
		System.out.println(s3);
		int n1 = Integer.parseInt(str);
		System.out.println(n1);
	}
}
