public class autoconvertdetail {
	public static void main(String[] args) {
    int v1 = 10;
 	//float = v1 + 1.1;
    //错
//[细节一]多种类型的变量运算时,会变成字节最大的变量double
    //从 float 到 double 可以
    //从 double 到 float 不可以
	//char - int - long	- float - double
	///byte - short - int - long	- float - double
	//两条线不自动转换
//[细节二]从低到高,否则报错
	System.out.println(1);

	// double v2 = v1 + 1.1;
    //path1

    float v2 = v1 + 1.1F;//path2
	System.out.println(v2);



//[细节三](byte -short) and char　之间不会相互自动转换
	//当把数赋给bety是
	//先判断该数是否在bety范围之内
	//如果是就可以
	//byte(-128-127) 
	byte b1 = 127;
	int n1 = 10;
	//byte b2 = n1;错，变量赋值，判断类型
	//byte 不能向 int
	//char c1 = b1;错

//[细节四]byte char short三者运算,首先转为int类型
	byte b2 = 1;
	short s1 = 1;
	//short s2 = b2 + s1;//
	//错,s2应为int类型
	//int s2 = b2 + s1;
	//错,s2已为int类型,无法在定义为int类型
	//byte b3 = b2 + b2;
	//错应为int类型
//[细节五]
	//boolean不参与转换
	// boolean pass = true;
	// int i1;
	//错
	
	//自动提示原则A
	//表达式结果自动提升为操作数中字节最大的类型

	}
}
	