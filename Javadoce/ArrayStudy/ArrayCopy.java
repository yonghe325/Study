public class ArrayCopy{
	public static void main(String[] args) {
		int[] a = {10,20,30};
		int[] b = new int[a.length];
		for (int i = 0;i< a.length ;i++ ) {
			b[i] = a[i];
		System.out.println("a=" + a[i]);
		System.out.println("b=" + b[i]);
		}
		b[1] = 50;
		System.out.println("a1=" + a[1]);
		System.out.println("b1=" + b[1]);
			
	}
}