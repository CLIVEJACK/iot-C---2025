///*
//	7. �����͸� ���ؼ� �����Ҷ��� '->(�ַο�)'�� ���ų� '������(*ptr).' �� ����Ѵ�
//*/
//
//#include <iostream>
//
//
//class MyClass {
//public:
//	int vlaue;
//	//MyClass() {};
//	MyClass(int v = 0) : vlaue(v) { }		//������
//	void showMyClass() {
//		std::cout << "vlaue: " << vlaue << std::endl;
//	}
//};
//int main()
//{
//
//	MyClass* ptr = new MyClass{ 10 };
//	ptr->showMyClass();		//->(�ַο�)�� �Լ��� �����ؼ� ���� ������ �����ϴ�
//	printf("value: %d\n", ptr->vlaue);
//
//	delete ptr;
//
//	MyClass obj{};		// ����Ʈ �����ڸ� ����ų� �������� int���ڸ� =0���� �ʱ�ȭ ���ָ� �ȴ�
//	ptr = &obj;
//
//	ptr->showMyClass();		// ->�� Ǯ� ���� �ؿ��ִ� �������� �ȴ�.
//	(*ptr).showMyClass(); // �������� ����Ҷ��� ��ȣ�� ����Ѵ�
//
//	printf("vlaue: %d\n", ptr->vlaue);
//
//	return 0;
//}