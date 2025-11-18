public class ArrayExs01{
	public static void main(String[] args) {
		int[] arr = {10,12,45,90};
		int a = 23;
		int num = 0;
		int[] arr1 = new int[arr.length+1];
		
		for (int i = 0; i < arr1.length ;i++ ) {
			//0 1 2 3 4
			
			if ( num == 0  && arr[i-num]> a) {
				arr1[i] = a;
				num++;
				continue;
			}
			//num = 1;
			// System.out.println("第" + (i+1) +  "为" + arr1[i]);
				
			arr1[i] = arr[i-num];
		}

			
		
		for (int j = 0; j < arr1.length;j++ ) {
			//得到对应的每个一维数组的长度
				System.out.print(arr1[j] + " ");
				//输出一维数组
				System.out.println ();
			}
	
	}
}

			
			

				
			
	