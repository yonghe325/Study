public class DoWhileEx2{
	public static void main(String[] args) {
		int a = 0;
		do {
			if (a%3!=0) {
			System.out.println("a=" + a);
			}
			a+=5;
		} while ( a<=200 );
	}
}
	
public class DoWhileEx2.0{
	public static void main(String[] args) {
		int a = 0;
		do {
			if (a%5==0 && a%3!=0) {
			System.out.println("a=" + a);
			a++;
			} while (a<=200);
		}
	}
}


