public class For_Stars{
	public static void main(String[] args) {
		for (int totalLeve = 1; totalLeve<=5 ; totalLeve++) {
			for (int j = 1;j <= 5 - totalLeve ;j++ ) {
				System.out.print(" ");
			}
			for (int i =1; i <= 2 * totalLeve -1 ;i++ ) {
				System.out.print("*");

			}
				System.out.println("");
		}
	}
}
				
				
			