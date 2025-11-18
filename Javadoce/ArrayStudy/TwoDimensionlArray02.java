public class TwoDimensionlArray02{
	public static void main(String[] args) {
//动态初始化
//类型[][] 数组名 = 类型[大小][大小];		
		int arr[][] = new int[2][3];
		//2个长度为3的一维数组组成的二维数组
		//两行三列
		
		int arr1[][];
		arr1 = new int[2][3];
		//先声明,后开空间
		
		arr[1][1] = 8;
		//类似于坐标
		
		for (int i = 0; i < arr.length ;i++ ) {
			for (int j = 0;j<arr[i].length ;j++ ) {
				System.out.print(arr[i][j] + " ");
			}
			System.out.println ();
		}

			
				





	}
}