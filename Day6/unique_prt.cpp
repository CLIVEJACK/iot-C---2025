///*
//	9. ����Ʈ ������ : unique_prt
//	��ü�� ���� �ֱ⸦ ��ü�� �ñ����� ���α׷��ӿ��� �޸� ���� �δ��� �ٿ��ش�
//	����Ʈ �����͸� �޸𸮸� �������� �Ҵ�Ǿ��ִ� ���� �ڵ����� ���������ش�
//	unique_ptr - �������� ���������� �����ϴ� ����Ʈ ������(auto_ptr�� ��ü)
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//public:
//	MyClass() { cout << "MyClass() ȣ��" << endl; }
//	~MyClass() { cout << "~MyClass() ȣ��" << endl; }
//};
//int main()
//{
//	unique_ptr<MyClass> ptr(new MyClass{});	//����Ʈ ������ ���� cast�����ڿ� ����� ������ ���� /unique_ptr<MyClass>Ű���带 �����ϸ� �����Ҵ��� new�� �����Ŀ� ������ ���� �ʾƵ��ȴ�.
//	unique_ptr<MyClass> ptr2= move(ptr);
//
//	return 0;
//}