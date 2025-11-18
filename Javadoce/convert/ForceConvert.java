public class ForceConvert{
	//数据从大到小
	public static void main(String[] args) {
		
		int i1 = (int)1.9;
		System.out.println("i1=" + i1);
		//精度损失

		int i2 = 2000;
		byte b1 =(byte)i2;
		System.out.println("b1=" + b1);
		//b2 = -48
		//数据溢出

		//int n1 = (int)10*3.5+6*1.5
		//错,只转了10,double to int
		int n2 = (int)(10*3.5+6*1.5);
		System.out.println("n2=" + n2);
		//n2 = 44
		//用小括号增加优先级
		
		


	}
}