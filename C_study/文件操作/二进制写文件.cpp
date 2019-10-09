//进行文件操作时要包含的头文件
#include <fstream>

#include <iostream>
using namespace std;

//操作文件三大类
//1.ofstream 写操作
//2.ifstream 读操作
//3.fstream  读写操作

void main() {
	//写文件

	//1.包含头文件 fstreaml

	//2.创建流对象
	ofstream ofs;

	//3.指定打开方式
	//ios::in 为了读而打开文件 ios::out 为了写而打开 ios::ate 初始位置最后 ios::trunc 如果文件存在先删在创建 ios::binary
	ofs.open ("test.txt", ios::out);

	//4.写入内容
	ofs << "hello world"<<endl;
	ofs << "hello dog"<<endl;
	ofs << "hello pig"<<endl;

	//5.关闭文件
	ofs.close();
}