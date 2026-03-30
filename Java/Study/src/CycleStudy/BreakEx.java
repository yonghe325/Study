public class BreakEx{
	public static void main(String[] args) {
		int sun =0;
		for (int num = 0;num <= 100 ;num++ ) {
			sun += num;
			System.out.println("num=" + num);
			if (sun >= 20) {
				break;
			}
		}
			System.out.println("sun=" + sun);
	}
}
				
			