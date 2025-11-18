public class For_Stars02{
	public static void main(String[] args) {
		for (int totalLeve = 1; totalLeve<=7 ; totalLeve++) {
			for (int j = 1;j <= 7 - totalLeve ;j++ ) {
				System.out.print(" ");
			}
			for (int i =1; i <= 2 * totalLeve -1 ;i++ ) {
				if (i==1 | i==2 * totalLeve -1 | totalLeve==7) {
					System.out.print("*");
				} else{
					System.out.print(" ");
				}
			}
			System.out.println(" ");
		}
	}
}

					




				
				
			