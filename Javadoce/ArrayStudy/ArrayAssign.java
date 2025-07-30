public class ArrayAssign{
	public static void main(String[] args) {//
//基本数据类型赋值,值拷贝
		//呢的变化,不影响n1
		int n1 = 10;
		int n2 = n1;
		n2 = 80;
		System.out.println("n1=" + n1);
		System.out.println("n2=" + n2);
//数组类型赋值,引用拷贝,地址拷贝
		//用的是一个地址
		int[] arr1 = {1,2,3};
		int[] arr2 =arr1;
		//把arr1付给arr2
		//arr2的变化会影响arr1
		arr2[0] = 10;
		for (int i =0 ;i<arr1.length;i++ ) {
		System.out.println(arr1[i]);
			
		}
	}
}