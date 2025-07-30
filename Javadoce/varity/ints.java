public class ints{
	public static void main(String[] args) {
		byte a = 127;
		short b = 32767;
		System.out.println(a);
		System.out.println(b);
		long c = 99999999999L;//long变量定义后需要加L
		System.out.println(c);
		int d = 222;
		System.out.println(d);
		//尽量用小的变量类型
		//如果变量会增加（减小），保险用大类型（long）。
	    
	}
}