////进行文件操作时要包含的头文件
//#include <fstream>
//
//#include <iostream>
//using namespace std;
//
//#include <string>
////操作文件三大类
////1.ofstream 写操作
////2.ifstream 读操作
////3.fstream  读写操作
//
//void main() {
//	//读取文件
//
//	//1.包含头文件 fstreaml
//
//	//2.创建流对象
//	ifstream ifs;
//
//	//3.指定打开方式
//	//ios::in 为了读而打开文件 ios::out 为了写而打开 ios::ate 初始位置最后 ios::trunc 如果文件存在先删在创建 ios::binary
//	ifs.open("test.txt", ios::in);
//
//	//判断文件是否打开成功
//	if (!ifs.is_open()) {
//		cout << "failed" << endl;
//		return;
//	}
//
//	//4.读数据
//	//第一种方法 //会把空格输出为换行
//	//char buf[1024] = { 0 };
//	//while (ifs>>buf) {
//	//	cout<< buf << endl;
//	//}
//
//	//第二种方法
//	char buf[1024] = { 0 };
//	while (ifs.getline(buf,sizeof(buf))) {
//		cout << buf << endl;
//	}
//
//	//第三种方法 使用getline要包含头文件 <string>
//	//string buf;
//	//while (getline(ifs,buf)) {
//	//	cout << buf << endl;
//	//}
//
//	//第四种方法 不推荐使用
//	//char c;
//	//while ( (c = ifs.get()) != EOF) { //EOF -> end of file
//	//	cout << c << endl;
//	//}
//
//	//5.关闭文件
//	ifs.close();
//}