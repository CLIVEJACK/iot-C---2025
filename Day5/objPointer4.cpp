///*
//	8.��ü �����͸� nullptr�� �ʱ�ȭ �ϴ� ���
//*/
//#include <iostream>
//
//class MyClass {
//public:
//	void show() {
//		std::cout << "Hello!!" << std::endl;
//	}
//};
//
//int main()
//{
//	MyClass* ptr = nullptr;			// ���ڿ�(�迭)�̳� �����Ϳ��� ���� NULL�� nullptr�̶�� ǥ��/ nullptr�� ���������� ��	�ƽ�Ű�ڵ��	
//	//printf("prt: %p\n", *ptr);
//	if (ptr != nullptr) ptr->show();
//	else printf("ptr is null");
//
//	ptr = new MyClass{};
//	ptr->show();
//	
//	return 0;
//}