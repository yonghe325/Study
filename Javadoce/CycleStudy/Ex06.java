public class Ex06{
	public static void main(String[] args) {
		double sum = 0;
		for (double a = 1;a<=100 ;a++ ) {
			if (a%2 == 0) {
				sum = (-1)*1/a + sum;
				System.out.println("a=" + a); 
				System.out.println("sum=" + sum ); 
				System.out.println("=====1"); 
			} else{
				sum =(1/a) + sum;
				System.out.println("a=" + a); 
				System.out.println("sum=" + sum ); 
				System.out.println("=====2"); 
			}
		}
		System.out.println("sum=" + sum ); 
	}
}
				
		 	