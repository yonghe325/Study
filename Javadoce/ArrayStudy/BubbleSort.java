public class BubbleSort{
	public static void main(String[] args) {
		int[] arr = {100,9874,-848,-1000,5,9548,5045,500};
		int num = arr.length - 1;
		
		for (; num >= 0 ;num-- ) {
			for (int ins = 1; ins < arr.length  ; ins++ ) {
				while(arr[ins] > arr[ins - 1]){
					int b = arr[ins];
					arr[ins] = arr[ins - 1];
					arr[ins - 1]= b;
				}
			}
		for (int j = 0;j<arr.length ;j++ ) {
			System.out.println("第" + (j+1) + "项为" + arr[j]);
		}
		System.out.println("第" + (arr.length-num) + "轮==========");
		
		}
			
			
		// if (ins == arr.length - 1) {
		// 	break;
		// }

				


			
	}
}