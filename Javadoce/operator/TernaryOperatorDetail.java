public class TernaryOperatorDetail{
	public static void main(String[] args) {
		int a = 5465;
		int b = 5187;
		int c = 6124;
		int max = (a>b? a:b)>c? (a>b? a:b):c;
		System.out.println("max=" + max);
	}
}