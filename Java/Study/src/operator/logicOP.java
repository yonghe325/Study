public class logicOP{ 
	public static void main(String[] args) {
		boolean a = true;
		boolean b = true;
		int n1 = 100;
		int n2 = 50;
		System.out.println( a & b );
		System.out.println( a && b );
//逻辑与&,短路与&&,同真为真,同假为假
//逻辑与&,无论第一个判断是否为false,第二个条件都要判断
//短路与&&，当第一个判断为false,则不判断,不运行第二个条件
	//直接输出false
	//比&更快
		if (n1 >75 & n2 <75) {
			System.out.println("ok");
		} else { 
			
				System.out.println("on");
		}	
////////////////////////////////////////////////////////		
		System.out.println("&&============");
		int v1 = 5;
		int v2 = 10;
		if (v1 > 5 && ++v2 == 11) {
		//if (v1 > 5 & ++v2 == 11) {
			System.out.println("&&");
		} else {

			System.out.println("v1=" + v1);
			System.out.println("v2=" + v2);
			//v1=5
			//v2=10
			//对于短路与而言
			//当第一个判断为false,则不判断,不运行第二个条件,
			//而逻辑与仍会判断
		}

////////////////////////////////////////////////////////		
		System.out.println("||============");

		System.out.println( a | b );
		System.out.println( a || b );
//|逻辑或,||短路或
//|逻辑或,||短路或,一真为真,同假为假
//短路或||,当第一个判断为true,则不判断,不运行第二个条件
//逻辑或|,无论第一个判断是否为true,第二个条件都要判断
	//直接输出true
	//比|更快	
		int v3 = 5;
		int v4 = 10;
		if (v3 == 5 || ++v4 != 11) {
		//if (v3 != 5 | ++v4 != 11) {
			System.out.println("||");
		} else {

			System.out.println("v3=" + v3);
			System.out.println("v4=" + v4);	
			//v3 = 5
			//v4 = 10
			//当||时,else里不输出
		}
		System.out.println("============");
////////////////////////////////////////////////////////		
		System.out.println( !a );
		System.out.println(60 > 20);//fals	
		System.out.println(60 < 20);//true
// !取反,非
	    System.out.println("============");
////////////////////////////////////////////////////////		
		System.out.println( a ^ b );
		boolean c = (10>1) ^ (2>1);
		boolean d = (10<1) ^ (2>1);
		System.out.println(c);
		System.out.println(d);
//^两者不同时,输出true,否则为false

	}
}

			






