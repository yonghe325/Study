public class ArrayEx02{
	public static void main(String[] args) {
		int[] arr ={4,100,9,23,25};
		int num = arr[0];
		int max = 0;
		for (int i =1;i<arr.length ;i++ ) {
			if (num < arr[i]) {
				num = arr[i];
				max = i;
			}
			
		}
		System.out.println("第" + (max+1) + "个");
		
	}
}
				
			

		
