public class For1{
	public static void main(String[] args) {
	//for (循环变量初始化 ;循环条件;循环变量迭代 ) {
	//		循环操作(可多条语句);
	//		}		
	for ( int i=0;i<=10;i++) {
		System.out.println("i=" + i);
		}	
	//for (;;) {},死循环	

//循环变量初始化
	//循环条件为 true
		//循环操作
			//循环变量迭代
  	//循环条件为false
		//跳出循环


//循环条件一定返回为boolean类型
	//循环变量初始化,循环变量迭代可以写到别处
	//但;一定保留
	//如
		//int i=0;
		//for ( ;i<=10; ){
		//	  i++;
		//} 
	//可以使i的作用范围变大,不只局限于for循环内

//循环变量初始化,循环变量迭代可以有多条
	//但要求类型一样,中间用逗号隔开
	//如
	int count = 3;
	for (int a = 0,b=0 ;a < count ; a++ , b+=2 ) {
		System.out.println("a=" + a + "\t" + "b=" + b);
	}
	}
}
			
	



