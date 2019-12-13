//#include <iostream>
//using namespace std;
//
////函数模板
//
////交换两个整形
//void swapInt(int &a ,int &b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
////交换两个浮点型
//void swapDouble(double & a, double & b) {
//	double temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
////函数模板
//template<typename T> //声明一个模板，并告诉编译器后面T是一个通用数据类型
////template<class T> 也可以写为这样
////注意事项：声明函数模板后必须马上使用↓
//
////实现函数模板
////注意事项:上方声明模板，如果实现没有使用T，则会报错
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void main() {
//
//	int a = 10;
//	int b = 20;
//	swapInt(a, b);
//	cout << a << b << endl;
//
//	//调用通用函数 并指定T
//	//两种方法使用函数模板
//
//	//1.自动类型推导 由编译器自动推导出数据类型
//	//注意事项：自动类型推导必须推导出一致的数据类型T才可以使用。a，b数据类型不一致会报错
//	mySwap(a, b);
//
//	//2.显式指定类型
//	mySwap<int>(a, b);
//}