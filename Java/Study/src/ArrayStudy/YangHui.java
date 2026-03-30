import java.util.Scanner;
public class YangHui{
	public static void main(String[] args) {
		Scanner MyScanner = new Scanner(System.in);
		System.out.print("a=");
		int a = MyScanner.nextInt();
		int[][] arr = new int[a][];
		
		for (int i = 0;i < a ;i++ ) {
			arr[i] = new int[i+1];
			arr[i][0] = 1;
			arr[i][i] = 1;
			for (int j = 1;j < i & i>=2;j++ ) {
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j]; 
				
			}
			
		}

		for (int i = 0; i < arr.length ;i++ ) {
		//遍历二维数组里的每个元素(数组)
			
			for (int j = 0; j < arr[i].length;j++ ) {
			//得到对应的每个一维数组的长度
				System.out.print(arr[i][j] + "\t" + "(" + i + "," + j +")" );
				//输出一维数组
			}
			System.out.println ();
		}
		
		

		 
		
	}
}

				
			