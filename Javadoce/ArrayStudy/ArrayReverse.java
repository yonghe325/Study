public class ArrayReverse{
	public static void main(String[] args) {
		int[] arr1 = {11,22,33,44,55,66};
		int[] arr2 = new int[arr1.length];
		
		for (int i = 0 ;i < arr1.length ;i++ ) {
			arr2[i] = arr1[(arr1.length-1)-i];
		}
		arr1 = arr2;
		for (int j = 0;j<arr1.length ;j++ ) {
			System.out.println("第" + (j+1) + "为" + arr1[j]);
		}	
	}
}

class ArrayReverse1{
	public static void main(String[] args) {
		int[] arr1 = {11,22,33,44,55,66,77,88,99};
		for (int i = 0;i < arr1.length / 2 ;i++ ) {
			
			int b = arr1[i];//临时变量b
			arr1[i] = arr1[(arr1.length-1)-i];
			arr1[(arr1.length-1)-i] = b;
		
		}
		
		for (int j = 0;j<arr1.length ;j++ ) {
			System.out.println("第" + (j+1) + "为" + arr1[j]);
		}	
	}
}
	
			