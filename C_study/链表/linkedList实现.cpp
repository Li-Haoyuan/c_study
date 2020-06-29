//#include <stdio.h>
//#include <malloc.h>
//#include <stdlib.h>
//
//typedef struct Node {
//	int data;
//	struct Node* NextNode;
//}NODE,*PNODE;
//
////函数声明
//PNODE create_linked_list(); //创建链表
//void print_node(PNODE Phead); //打印链表
//bool is_empty(PNODE Phead); //判断链表是否为空
//int length_list(PNODE phead); //取得链表长度
//bool insert_list(PNODE phead, int pos, int val); //向某一个节点插入数据
//bool delete_list(PNODE phead,int position,int *); //删除某一个节点
//void sort_list(PNODE phead); //排序
//
//void main() {
//	PNODE Phead = NULL;
//	int val;
//	Phead = create_linked_list();
//	print_node(Phead);
//	/*is_empty(Phead);
//	length_list(Phead);
//	sort_list(Phead);
//	print_node(Phead);*/
//	insert_list(Phead, 3, 99); //向第二个后面插入 99
//	print_node(Phead);
//	delete_list(Phead, 3, &val);
//	print_node(Phead);
//}
//
//PNODE create_linked_list() {
//
//	int len;
//	int var;
//
//	printf("请输入要创建的链表长度");
//	scanf_s("%d",&len);
//	//创建头节点
//	PNODE NodeHead = (PNODE)malloc(sizeof(NODE));
//	if (NodeHead == NULL) {
//		printf("error");
//		exit(-1);
//	}
//	//创建一个临时节点，临时节点永远指向尾节点，只有一个节点的时候指向头结点。因为头就是尾
//	PNODE NodeFait = NodeHead;
//	NodeFait->NextNode = NULL;
//
//	//PNODE node_temp = new struct Node();
//	for (int i = 1; i <= len; i++) {
//		printf("请输入第%d个链表数据",i);
//		scanf_s("%d", &var);
//
//		//创建一个新节点
//		PNODE NewNode = (PNODE)malloc(sizeof(NODE));
//
//		if (NewNode == NULL) {
//			printf("error");
//			exit(-1);
//		}
//
//		//赋值
//		NewNode->data = var;
//		//临时节点(尾节点)的指针域改为下一个节点，把链表挂上
//		NodeFait->NextNode = NewNode;
//		//新节点的指针域为NULL
//		NewNode->NextNode = NULL;
//		//将新的节点变为尾节点
//		NodeFait = NewNode;
//	}
//	//返回头结点地址
//	return NodeHead;
//}
//
//void print_node(PNODE Phead) {
//
//	PNODE linked = Phead->NextNode;//首节点
//
//	while (linked != NULL) {
//		printf("%d\n", linked->data);
//		linked = linked->NextNode;
//	}
//}
//
//bool is_empty(PNODE Phead) {
//	if (Phead->NextNode == NULL) {
//		printf("链表为空\n");
//		return true;
//	}
//	else {
//		printf("链表不为空\n");
//		return false;
//	}
//}
//
//int length_list(PNODE Phead) {
//	int len = 0;
//	PNODE next = Phead->NextNode;
//	while (next != NULL) {
//		len++;
//		next = next->NextNode;
//	}
//	//printf("链表长度为%d\n", len);
//	return len;
//}
//
//void sort_list(PNODE Phead) {
//	//数组的选择排序
//	/*int array[5] = { 1,33,74,12,75 };
//	int len = sizeof(array)/sizeof(int);
//
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = i + 1; j < len; j++) {
//			if (array[i] < array[j]) {
//				int tmp = array[i];
//				array[i] = array[j];
//				array[j] = tmp;
//			}
//		}
//	}
//
//	for (int p = 0; p < len; p++)
//	{
//		printf("%d\n", array[p]);
//	}*/
//	int len = length_list(Phead);
//	PNODE p, q;
//	int i,j;
//	for (p = Phead->NextNode,i = 0; i < len - 1; i++,p = p->NextNode) {
//		for (j = i + 1,q = p->NextNode; j < len; j++, q=q->NextNode) {
//			if (p->data < q->data) {
//				int t = p->data;
//				p->data = q->data;
//				q->data = t;
//			}
//		}
//	}
//}
//
//bool insert_list(PNODE Phead, int pos, int val) {
//	int i = 0;
//	PNODE p = Phead;
//	//往第四号位插入 指定第三号位
//	while (p != NULL && i < pos - 1) {
//		p = p->NextNode;
//		i++;
//	}
//	// i>pos-1 防止入力负数
//	if (p == NULL || i>pos-1) {
//		return false;
//	}
//
//	//最终得到的p是 想插入位置的前一位置的节点
//
//	PNODE newNode = (PNODE)malloc(sizeof(NODE));
//	if (newNode == NULL) {
//		printf("申请内存失败");
//		exit(-1);
//	}
//	else {
//		PNODE temp = p->NextNode;
//		p->NextNode = newNode;
//		newNode->NextNode = temp;
//		newNode->data = val;
//		return true;
//	}
//
//}
//
//bool delete_list(PNODE Phead, int pos, int *val) {
//	int i = 0;
//	PNODE p = Phead;
//
//	//为什么insert是p != null 而 delete是p->NextNode != NULL
//	//如果有五个节点输入6 则失败 。但是插入的时候输入6是成功的
//
//	while (p->NextNode != NULL && i < pos - 1) {
//		p = p->NextNode;
//		i++;
//	}
//
//	if (p->NextNode == NULL || i > pos - 1) {
//		return false;
//	}
//
//	PNODE q = p->NextNode;
//	//将删除结点的值保存出去
//	*val =  q->data;
//
//	//删除p节点后面的节点
//	p->NextNode = p->NextNode->NextNode;
//	free(q);
//	q = NULL;
//
//	return true;
//}