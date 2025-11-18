public class Ex07{
	public static void main(String[] args) {
		int sum1 = 0;
		int sum2 = 0;

		for (int a = 1;a<=100 ;a++ ) {
			sum1 +=a;
			sum2 +=sum1;
			System.out.println("sum1=" + sum1);	
			System.out.println("sum2=" + sum2);	
			System.out.println("==========");	
		}
		//双变量
		

		int sum = 0;
		for (int i =1;i<=100 ; i++ ) {
			for (int j = 1 ;j <= i ;j++ ) {
				sum += j;
			}
		}	
			System.out.println("sum=" + sum);	
		//双循环
	}
}
				

