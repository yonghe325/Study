import java.util.Scanner;
public class ArrayAdd{
	public static void main(String[] args) {
	Scanner MyScanner = new Scanner(System.in);
	int[] arr = {1,2,3};
	
	do {	
			int[] arrnew = new int[arr.length + 1];
			//扩容
			for (int i = 0;i < arr.length ;i++ ) {
				arrnew[i] = arr[i]; 
			}
			//等位赋值
		
			// System.out.println("是否添加");
			// char react = MyScanner.next().charAt(0);
			
			System.out.println("输入新项");
			arrnew[arrnew.length-1] =  MyScanner.nextInt();
			arr = arrnew;
			//覆盖原来数组
			
			for (int i = 0;i < arrnew.length ;i++ ) {
				System.out.println("第" + (i+1) + "为" + arrnew[i]);	
			}
			System.out.println("是否继续添加? y/n");
			char react = MyScanner.next().charAt(0);
			if (react == 'n') {
				break;
			}
	} while  (true);
	}
}

				
			
		
	
			

		
			
				
			

				
	
		
		
	
			
			
			


			


		
			
