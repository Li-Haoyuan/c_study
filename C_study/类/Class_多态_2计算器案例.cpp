/*
#include <iostream>
using namespace std;

//普通写法和多态写法 实现两个计算器的类


//----------普通写法------------
class Calculator {
public:
	int getresult(string oper) {
		if (oper == "+") {
			return num1 + num2;
		}
		else if (oper == "-") {
			return num1 - num2;
		}
		else if (oper == "*") {
			return num1 * num2;
		}
		else if(oper == "/") {
			return num1 / num2;
		}
		else {
			return 99999;
		}
		//如果想扩展新的功能，需要修改源码
		//开发中提倡开闭原则，对扩展进行开放，对修改进行关闭
	}

	int num1;
	int num2;
};

//--------多态使用计算器---------
//多态的好处：组织结构清晰，可读性强，对于前期和后期的扩展方便以及维护性高

//实现计算器的基类
class AbstractCalculator {
public:
	virtual int getresult() {
		return 0;
	}

	int num1;
	int num2;
};

//实现加法的类
class AddCalculator :public AbstractCalculator {
	int getresult() {
		return num1 + num2;
	}
};
//实现减法的类
class SubCalculator :public AbstractCalculator {
	int getresult() {
		return num1 - num2;
	}
};
//实现乘法的类
class MulCalculator :public AbstractCalculator {
	int getresult() {
		return num1 * num2;
	}
};

void test02() {

	//多态使用条件
	//父类指针或者引用指向子类对象

	//加法运算
	AbstractCalculator* abc = new AddCalculator;
	abc->num1 = 10;
	abc->num2 = 30;
	int result1 = abc->getresult();
	cout << result1 << endl;

	//动态申请的内存用完要删除
	delete abc;

	//减法运算

	abc = new SubCalculator;
	abc->num1 = 10;
	abc->num2 = 30;
	int result2 = abc->getresult();
	cout << result2 << endl;

	//动态申请的内存用完要删除
	delete abc;
}

void test01() {
	Calculator c;
		c.num1 = 10;
		c.num2 = 30;
		cout << c.getresult("+") << endl;
		cout << c.getresult("*") << endl;
		cout << c.getresult("/") << endl;
		cout << c.getresult("-") << endl;
}
void main() {
	test02();
}
*/