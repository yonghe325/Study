import java.util.Scanner;
public class ArrayReduce{
	public static void main(String[] args) {
		Scanner MyScanner = new Scanner(System.in);
		int[] arr = {1,2,3,4,5};
		do {
			for (int j = 0;j<arr.length ;j++ ) {
			System.out.println("第" + (j+1) + "项为" + arr[j]);
			}
			System.out.println("是否缩项? y/n");
			char react = MyScanner.next().charAt(0);
			if (react != 'y' | arr.length == 1 ) {
				System.out.println("已停止缩项");
				break;
			}
			System.out.println("输入去除的哪项");
			int a = MyScanner.nextInt();
			int[] arrnew = new int[arr.length-1];
			for (int i = 0; i <= arrnew.length -1  ; i++ ) {
				if (i >= a-1) {
					arrnew[i] = arr[i+1];
				} else {
				arrnew[i] = arr[i];
				}
			}
			arr = arrnew;
			
		} while (true);
	}
}
		

			

			
			
					
				
				
					
