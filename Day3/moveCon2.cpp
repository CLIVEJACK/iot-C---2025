///*
//	8. �̵� ������(T&&)
//	r-value refernce �� �Ķ���ͷ� ���� �̵� ������
//	�ӽð�ü�� �ִ� �����͸� �̵���Ų��
//
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class Human {
//	char name[10];
//	int age;
//public:
//	// �Է��� 2�� �޴� ������
//	Human(const char* name, int age){
//		cout << "������ �Է� 2��" << endl;
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	// ���������
//	Human(const Human& other) {
//		cout << "��������� ȣ��" << endl;
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//	// �̵�������
//	Human(Human&& other) noexcept {			//noexcept ���ܸ� �߻��Ҽ����� �Լ� 
//		printf("�̵� ������ ȣ��\n");
//		strcpy(this->name, other.name);
//		this->age = other.age;
//
//		//other.name = nullptr;
//		other.age = 0;			// 
//
//	}
//	void printHuman() {
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//
//	Human h("ȫ�浿", 20);		
//	h.printHuman();			// ������ ȣ��
//
//	Human h2(h);			// ���� ������
//	h2.printHuman();	
//
//	Human h3(move(h));		// �̵������ڸ� ���ؼ� ��� - ����: (std::move(h)); 
//	h3.printHuman();		// ����� �ٸ��� ���� �̵����ؼ� ������.?
//	h.printHuman();
//
//	return 0;
//
//}
