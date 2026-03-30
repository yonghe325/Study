import java.util.Scanner;
public class BreakEx02{
	public static void main(String[] args) {
 		Scanner imforations = new Scanner(System.in);
 		String name = "";	
 		String pass = "";	
		for (int num = 2;num >= 0 ;num-- ) {
			System.out.println("请输入账户");
			name = imforations.next();
			System.out.println("请输入密码");
			pass = imforations.next();

		  //if (name.equals("丁真") || pass.equals("666") ) {
     		if ("丁真".equals(name) || "666".equals(pass) ) {
     		//避免"空指针"
				System.out.println("登陆成功");
				break;
			} else{
				System.out.println("登陆失败");
				System.out.println("剩余" + num + "次机会");
			}
			System.out.println("============");

		}
	}
}
			

			