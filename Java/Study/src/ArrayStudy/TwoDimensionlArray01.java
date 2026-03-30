//二维数组
public class TwoDimensionlArray01{
	public static void main(String[] args) {
		/*
		二维数组输出
		0 0 0 0 0 0 
		0 0 1 0 0 0
		0 2 0 3 0 0
		0 0 0 0 0 0
		*/

		int[][] arr = { {0,0,0,0,0,0},
						{0,0,1,0,0,0},
						{0,2,0,3,0,0},
					    {0,0,0,0,0,0} };
		//原来的一维数组的每个元素又是一维数组
		for (int i = 0; i < arr.length ;i++ ) {
		//遍历二维数组里的每个元素(数组)
			
			for (int j = 0; j < arr[i].length;j++ ) {
			//得到对应的每个一维数组的长度
				System.out.print(arr[i][j] + " ");
				//输出一维数组
			}
			System.out.println ();
		}
	}
}


			