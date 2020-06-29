#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

//压栈出栈 链表式

//栈是先进后出的存储结构

//栈的应用
//1.函数调用
//2.中断
//3.表达式求值
//4.缓冲处理
//5.内存分派
//6.迷宫

typedef struct Node {
	int data;
	struct Node* pNext;
}NODE , *PNODE;

typedef struct stack {
	PNODE pTop; //顶端
	PNODE pBottom; //底端
}STACK, * PSTACK;

void initStack(PSTACK);
void pushStack(PSTACK,int);
void traverseStack(PSTACK);
bool popStack(PSTACK,int *);
bool clearStack(PSTACK);

int main() {

	STACK S;
	int pop_value;

	initStack(&S); //建造一个空栈
	pushStack(&S,1); //压栈
	pushStack(&S,2);
	pushStack(&S,3);
	pushStack(&S,4);
	pushStack(&S,5);
	pushStack(&S,6);
	pushStack(&S,7);
	pushStack(&S,8);
	pushStack(&S,9);
	pushStack(&S,10);
	traverseStack(&S); //遍历输出

	if (popStack(&S, &pop_value)) { //出栈
		printf("出栈成功，%d\n", pop_value);
	}
	else {
		printf("出栈失败");
	}

	traverseStack(&S); //遍历输出

	if (clearStack(&S)) { //清空
		printf("清空成功");
	}
	else {
		printf("清空失败");
	}

	traverseStack(&S); //遍历输出

	return 0;
}

void initStack(PSTACK pS) {

	PNODE head = (PNODE)malloc(sizeof(NODE));
	if (head == NULL) {
		printf("取得内存失败");
		exit(-1);
	}
	head->pNext = NULL;
	pS->pBottom = head;
	pS->pTop = head;

}

void pushStack(PSTACK pS,int val) {

	PNODE newNode = (PNODE)malloc(sizeof(NODE));
	if (newNode == NULL) {
		printf("取得内存失败");
		exit(-1);
	}
	newNode->data = val;
	newNode->pNext = pS->pTop;

	pS->pTop = newNode;

}

void traverseStack(PSTACK pS) {

	PNODE tempP = pS->pTop;

	while (tempP != pS->pBottom) {
		printf("%d\n", tempP->data);
		tempP = tempP->pNext;
	}
}

bool popStack(PSTACK pS,int * val) {

	if (pS->pBottom != pS->pTop) {
		*val = pS->pTop->data;
		pS->pTop->data = NULL;

		PNODE temp = pS->pTop->pNext;

		delete(pS->pTop);

		pS->pTop = temp;

		return true;
	}
	else {
		return false;
	}
}

bool clearStack(PSTACK pS) {
	if (pS->pBottom != pS->pTop) {
		while (pS->pTop != pS->pBottom) {
			pS->pTop->data = NULL;
			PNODE temp = pS->pTop->pNext;

			delete(pS->pTop);
			pS->pTop = temp;
		}

		return true;
	}
	else {
		return false;
	}
}