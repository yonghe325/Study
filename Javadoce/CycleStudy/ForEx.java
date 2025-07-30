public class ForEx{
	public static void main(String[] args) {
		int num = 0;
		int sun = 0;
		for (int a = 0; a <= 100; a++ ) {
				if (a % 9 == 0) {
					System.out.println("a=" + a);
			num += 1;	
			sun = sun + a;
				}
		}
		System.out.println("num=" + num);
		System.out.println("sun=" + sun);
	}
}
