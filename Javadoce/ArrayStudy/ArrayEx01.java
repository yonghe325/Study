public class ArrayEx01{
	public static void main(String[] args) {
		char[] chars = new char[26];
		for (int i = 0; i < chars.length ;i++ ) {
			//i不能<=chars.length(0-26共27),只能是i<chars.length(0-25共16)
			chars[i] = (char)('A' + i);
		}
		
		for (int i =0;i < chars.length ;i++ ) {
			System.out.println("该数组的第" + (i+1) + "个元素是" + chars[i]);	
			
		}
	}
}