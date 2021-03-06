﻿/*
#include <iostream>
using namespace std;

//组装电脑例子

class AbstractCpu {
public:
	virtual void calculate() = 0;
};

class AbstractMemory {
public:
	virtual void storage() = 0;
};

class AbstractVideoCard {
public:
	virtual void display() = 0;
};

class Computer {
public:
	Computer(AbstractCpu* cpu, AbstractMemory* memory, AbstractVideoCard* videocard) {
		this->cpu = cpu;
		this->memory = memory;
		this->videocard = videocard;
	}

	void work() {
		cpu->calculate();
		memory->storage();
		videocard->display();
	}

	~Computer()
	{
		if (cpu != NULL) {
			delete cpu;
			cpu = NULL;
		}
		if (memory != NULL) {
			delete memory;
			memory = NULL;
		}
		if (videocard != NULL) {
			delete videocard;
			videocard = NULL;
		}
		cout << "释放完毕" << endl;
	}
	AbstractCpu* cpu;
	AbstractMemory* memory;
	AbstractVideoCard* videocard;
};

class interCpu :public AbstractCpu{
public:
	void calculate() {
		cout << "inter cpu" << endl;
	}
};

class interMemory : public AbstractMemory{
public:
	void storage() {
		cout << "inter memory" << endl;
	}
};

class interVideoCard :public AbstractVideoCard {
public:
	void display() {
		cout << "inter videocard" << endl;
	}
};

class lenovoCpu :public AbstractCpu{
public:
	void calculate() {
		cout << "lenovo cpu" << endl;
	}
};

class lenovoMemory :public AbstractMemory{
public:
	void storage() {
		cout << "lenovo memory" << endl;
	}
};

class lenovoVideoCard :public AbstractVideoCard {
public:
	void display() {
		cout << "lenovo videocard" << endl;
	}
};

void main() {

	AbstractCpu* cpu = new lenovoCpu;
	AbstractMemory* memory = new interMemory;
	AbstractVideoCard* videocard = new lenovoVideoCard;

	Computer com(cpu, memory, videocard);
	com.work();
}
*/