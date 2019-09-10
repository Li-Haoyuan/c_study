/*
#include <iostream>
using namespace std;

//一个小例子
class Cube
{
public:

	void set_width(double w) {
		m_width = w;
	}

	double get_width() {
		return m_width;
	}

	void set_high(double h) {
		m_high = h;
	}

	double get_high() {
		return m_high;
	}

	void set_long(double l) {
		m_long = l;
	}
	
	double get_long() {
		return m_long;
	}

	//求面积
	double get_area() {
		return (m_width * m_high + m_high * m_long + m_long * m_width) * 2;
	}

	//求体积
	double get_volume() {
		return m_width * m_high * m_long;
	}

private:
	double m_width; //宽
	double m_high; //高
	double m_long; //长
};

void main() {

	Cube c1;
	c1.set_high(10);
	c1.set_long(10);
	c1.set_width(10);

	cout << c1.get_area() << endl;
	cout << c1.get_volume() << endl;
}
*/