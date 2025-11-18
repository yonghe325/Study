//访问修饰符,控制属性的访问范围
//共有四种类型
//public
//proctected
//默认(空白)
//private

//属性如果不赋值,则有默认值,同数组一样
	//若属性值为空,则各类型都有默认值
		//int = 0
		//double = 0.0
		//float = 0.0
		//short = 0
		//byte = 0
		//long = 0
		//char = \u0000
		//boolean = false
		//String = null
	//
public class PropertiesDetail{
	public static void main(String[] args) {
		Person p1 = new Person();
		//对象引用,定义一个名称p1
		//new的一个对象空间才是真正的对象
		//真正对象在 堆 里
		System.out.println("age=" + p1.age);
		System.out.println("name=" + p1.name);
		System.out.println("isPass=" + p1.isPass);
		System.out.println("sal=" + p1.sal);
	
	}
}

class Person {
	//定义一个Person类
	String name;//属性,成员变量,字段,field
	double sal;
	int age;
	boolean isPass;;//属性可以是基本数据类型,也可以是引用类型(对象,数组)
    //此过程在堆里加载
}



