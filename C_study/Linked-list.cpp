#include <stdio.h>
#include <malloc.h>

//定义一个链表结点的数据类型
//链表的优点 插入/删除元素效率高 不需要一个连续的而且很大的内存
//链表的缺点 查找某个位置元素的效率低

//首节点：存放第一个有效数据的节点
//尾节点：存放最后一个有效数据的节点
//头结点：头节点的数据类型和首节点的类型是一模一样的，是首节点前面的节点，头节点并不存放有效数据，设置头节点的目的是为了操作链表。
//头指针：存放头节点地址的指针变量

struct Node
{
	int data;
	struct Node* pNext;
};

void createList(struct Node* pHead) {

	pHead = ()
}
void main(void) {
	//只需要头指针就能确定整个链表
	struct Node  * pHead;//pHead用来存放链表头结点的地址
	createList(pHead);
	showList();

}