public class Array01{
	public static void main(String[] args) {
//数组为一数据类型,是引用类型
//可以存放多个同一基本数据类型相同的数据
	double[] a ={1,2,3,4,5,6,7,8,9,10};
	int[] b ={1,2,3,4,5,6,7,8,9,10};
	float[] c ={1,2,3,4,5,6,7,8,9,10};
	char[] d = {'一','二','三','四','五','六','七','八'};
//数组可以通过遍历得到数组中的数据
	for (int i = 0;i<6 ;i++ ) {
		System.out.println("a第" + (i+1) + "个元素的值为" + a[i]);				
		System.out.println("b第" + (i+1) + "个元素的值为" + b[i]);				
		System.out.println("c第" + (i+1) + "个元素的值为" + c[i]);				
		System.out.println("d第" + (i+1) + "个元素的值为" + d[i]);				
			}		

	}
}