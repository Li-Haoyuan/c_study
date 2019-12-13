//
//#include <iostream>
//using namespace std;
//
////深拷贝与浅拷贝
//
//class Person {
//
//public:
//
//	int age = 0;
//	int* height;
//	Person() {
//		cout << "无参构造函数" << endl;
//	}
//
//	Person(int a , int h) {
//		age = a;
//		height = new int(h);//申请一个装整形的内存地址，初值为h 存放在堆区 需要手动释放
//		cout << "有参构造函数" << endl;
//	}
//
//	//自己实现拷贝构造函数 解决浅拷贝的问题
//	//如果自己不实现 编译器会给你提供浅拷贝赋值操作
//	Person(const Person& p) {
//		cout << "拷贝构造函数" << endl;
//		age = p.age;
//
//		//编译器默认实现就是这一行代码。
//		//height = p.height; 
//
//		//深拷贝操作
//		height = new int(*p.height);//再去堆中申请一块空间
//	}
//
//	~Person() {
//		//对指针地址进行释放操作
//		if (height != NULL) {
//			delete height; //delete操作是释放空间 但是指针仍然指向那块空间 
//			height = NULL; //为了防止变成野指针
//		}
//		cout << "析构函数" << endl;
//	}
//};
//
//
//int main(void) {
//
//	//在拷贝构造函数中 p1的指针地址赋值给了p2
//	//当程序运行完之后，p1和p2都会对这个指针地址进行释放，导致多重释放，使程序崩溃 
//	//这个也是浅拷贝存在的问题堆区内存重复释放
//	Person p1(18,170);
//	cout << p1.age << endl;
//
//	Person p2(p1);
//	cout << p1.age << endl;
//}
//
