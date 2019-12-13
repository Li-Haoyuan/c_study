//#include <iostream>
//using namespace std;
//
////1.如果函数模板和普通函数都可以调用 优先调用普通函数
////2.可以通过空模板参数列表的方式 强制调用函数模板
////3.函数模板可以产生函数重载
////4.如果函数模板可以产生更好的匹配，优先调用函数模板
//
//void print(int a,int b) {
//	cout << "函数被调用" << a << endl;
//}
//
//template <typename T>
//
//void print(T a ,T b) {
//	cout << "模板被调用" << a << endl;
//}
//
//template <typename T>
//
//void print(T a,T b,T c) {
//	cout << "模板被调用" << a << endl;
//}
//
//void main() {
//	//优先调用普通函数
//	print(4,5);
//
//	//空模板列表 强制调用函数模板
//	print<>(4,5);
//
//	//模板也会重载
//	print(4, 5 ,6);
//
//	//产生更好匹配时，优先调用模板 因为普通函数会发生隐式转换，更麻烦
//	char a = 'a';
//	char b = 'b';
//	print(a, b);
//}