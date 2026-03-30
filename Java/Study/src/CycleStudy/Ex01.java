public class Ex01{
	public static void main(String[] args) {
		double money = 100000;
		int num = 0;
		while (money >= 0) {
			while (money >50000) {
				money = money*0.95;
				num++;
				System.out.println("money=" + money);
				System.out.println("num==" + num);
			}
				
			num++;
			System.out.println("num==" + num);
			money=money-1000;
			System.out.println("money==" + money);
			
			if (money <= 1000) {
				break;
			}
				
			
				

		}
		System.out.println("能过" + num + "次路口");
	}
}