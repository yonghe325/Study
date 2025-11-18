public class SwitchDetail{
	public static void main(String[] args) {
		char a = 'a';
		switch (a){
			case 'a':
		 		System.out.println("1");
		 	break;
		 	case 'b':
		 		System.out.println("2");
		 	break;
		 	case 'c':
		 		System.out.println("c");
		 	break;
		 	
		 	//case 1.12:
		 	//	System.out.println("1.12");
		 	//break;
		 	
		 	//switch表达式中的返回值必须是
		 	//byte,short,int,char,enum[](枚举),String
		 	//不能是double
		 	case 4:
		 		System.out.println("4");
		 	break;
		 	default:
		 		System.out.println("0000");
//表达式数据类型必须与case后常量相同
//或可以相互转换,例如int-char
		}













	}
}