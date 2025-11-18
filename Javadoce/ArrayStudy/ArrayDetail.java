public class ArrayDetail{
	public static void main(String[] args) {
//1.数组是多个相同类型的数据的组合
//用来实现对这些数据的统一管理
	int[] arr1 = {1,2,3,4,5}; 
	//int[] i ={1,2,3,4,5.2}; 
	//相当于将double赋值给一个int类型
	double[] arr2 = {1.1,2.2,3.3,100};
	//满足低精度向高精度

//2.数组中的元素可以是任何数据类型
//包括引用元素,但不能混用
	String[] arr3 = {"一","2","三"};

//3.若为空数组,各类型都有默认值
	//int = 0
	//double = 0.0
	//float = 0.0
	//short = 0
	//byte = 0
	//long = 0
	//char = \u0000
	//boolean = false
	//String = null
	short[] arr4 = new short[3];
	for (int i = 0;i<arr4.length ;i++ ) {
		System.out.println(arr4[i]);
	}
//4.数组的下标有效值为数组的length-1
//否则会报数组越界

		

	}
	
}