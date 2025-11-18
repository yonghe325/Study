public class chars {
	public static void main(String[] args) {
		char c1 = 'a';
		char c2 = '\t';
		char c3 = '勇';
		char c4 = 97;
		//char变量本质为一个整数
		//输出该整数对应的Unicode码的字符
		//97 代表 a
		System.out.println(c1);
		System.out.println(c2);
		System.out.println(c3);
		System.out.println(c4);
		System.out.println('a' + 10);
		System.out.println("\t");





		System.out.println((int)c4);
		char c5 = '张';
		char c6 = '勇';
		// char c7 = '武';
		// char c8 = '雨';
		// char c9 = '涵';


		System.out.println((int)c5);
		System.out.println((int)c6);
		// System.out.println((int)c7);
		// System.out.println((int)c8);
		// System.out.println((int)c9);
		System.out.println("\t");
		
		int n1 = (int)c5;
		int n2 = (int)c6;
		System.out.println(n1);
		System.out.println(n2);


	}	
}