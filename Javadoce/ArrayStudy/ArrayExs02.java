public class ArrayExs02{
	public static void main(String[] args) {
		int[] arr = new int[10];
		for (int i = 0  ;i < arr.length ;i++ ) {
			arr[i] = (int)(Math.random() * 100 + 1);
		}
		//生成
		for (int i = 0; i < arr.length ;i++ ) {
			System.out.print(arr[i] + " ");
		}
		System.out.println ();
		System.out.println("======");
		//正序打印
		for (int j = arr.length - 1 ; j >= 0 ;j-- ) {
			System.out.print(arr[j] + " ");
		}
		System.out.println ();
		System.out.println("======");
		//倒序打印
		int max = 0;
		int maxindex = 0;
		double sum = 0;
		for (int i = 0 ; i < arr.length - 1 ; i++ ) {
			if (max<arr[i]) {
				max = arr[i];
				maxindex = i;
				sum += arr[i];
			}
		}
		double avsum = sum/10; 
		System.out.println("max=" + max);
		System.out.println("maxindex=" + maxindex);
		System.out.println("平均值=" + avsum);
		System.out.println("sum=" + sum);
		System.out.println("======");
		//求最值
		for (int i = 0; i < arr.length ;i++ ) {
			if (arr[i] % 10 == 8 | arr[i] / 10 == 8) {
				System.out.println(" 里面带8的有" + arr[i] + "  index=" + i);
			}
		}
		System.out.println("======");
		//80~89,8,18,28..98
		//找出里面带8的

			
				
		
			
		

		
				
		


			
			
				
			
	}
}