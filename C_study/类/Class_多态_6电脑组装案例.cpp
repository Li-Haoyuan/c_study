#include <iostream>
using namespace std;

//组装电脑例子

class AbstractCpu {
public:
	virtual void calculate() = 0; 
	~AbstractCpu()
	{

	}
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
	Computer(AbstractCpu * cpu, AbstractMemory * memory , AbstractVideoCard * videocard) {
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
		if(memory != NULL) {
			delete memory;
			memory = NULL;
		}
		if(videocard != NULL) {
			delete videocard;
			videocard = NULL;
		}
	}
	AbstractCpu* cpu;
	AbstractMemory* memory;
	AbstractVideoCard* videocard;
};

class inter :public AbstractCpu, public AbstractMemory, public AbstractVideoCard {
public:
	void calculate(){
		cout << "inter cpu" << endl;
	}
	void storage() {
		cout << "inter memory" << endl;
	}
	virtual void display() {
		cout << "inter videocard" << endl;
	}
};

class lenovo :public AbstractCpu, public AbstractMemory, public AbstractVideoCard {
public:
	void calculate() {
		cout << "lenovo cpu" << endl;
	}
	void storage() {
		cout << "lenovo memory" << endl;
	}
	virtual void display() {
		cout << "lenovo videocard" << endl;
	}
};

void main() {
	AbstractCpu* cpu = new lenovo;
	AbstractMemory* memory = new inter;
	AbstractVideoCard* videocard = new lenovo;

	Computer com(cpu, memory, videocard);
	com.work();
}