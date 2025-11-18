public class Break01{
	public static void main(String[] args) {
//break语句出现在多层嵌套的语句中时
//可以通过label指明要终止的是哪层语句块
lable1:
for (int j = 0 ; j < 4 ;j++ ) {//外层循环
lable2:
	for (int i = 0; i < 10 ;i++ ) {//内层循环
		if (i == 2) {
			break lable1;
			//退出到外层循环lable1
		}
	System.out.println("i=" + i);	
	}
}
//尽量不用lable
//没有指定标签,默认退出最近的循环体

	



	}
}