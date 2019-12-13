//#include <iostream>
//using namespace std;
//
//template<typename T>
//
//void sort(T arr[],int len) {
//
//	for (int i = 0; i < len-1; i++) {
//		int max = i;
//		for (int j = i+1; j < len; j++) {	
//			if (arr[max] < arr[j]) {
//				swap(arr[max], arr[j]);
//			}
//		}
//	}
//}
//
//template <typename T>
//
//void swap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template <typename T>
//
//void printArray(T arr[],int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << endl;
//	}
//}
//
//void test01() {
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	//求长度
//	int len = sizeof(arr) / sizeof(int);
//	//排序
//	sort(arr, len);
//	//输出
//	printArray(arr, len);
//}
//
//void test02() {
//	char arr[] = "tjsnf";
//	int len = sizeof(arr) / sizeof(char);
//	sort(arr, len);
//	printArray(arr, len);
//}
//
//void main() {
//	//test01();
//	test02();
//}