///*
//	2. protected (����������): ��ӹ��� �ڽ��� ���� �����ϴ�. 
//*/
//
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class Human {
//protected:		// ��ӵǾ��� 
//	char name[20];
//	int age;
//public:
//	Human(const char* aname, int aage) {
//		strcpy_s(name,aname);
//		age = aage;
//	}
//	void getData() {
//		cout << "�̸�: " << name << "����: " << age << endl;
//	}
//};
//class Student : public Human {
//private:
//	int studentID;
//public:
//	Student(const char* aname, int aage, int astudentID) : Human(aname, aage) {
//		studentID = astudentID;
//	}
//	void showStudnet() {
//		cout << "�̸�: " << name << ", ����: " << age;		// ������ private�� ���������� �Ұ���
//		cout << "�й�: " << studentID << endl;
//	}
//};
//
//int main() 
//{
//	Human h("ȫ�浿", 25); // �θ�Ŭ���� ����
//	h.getData();
//
//	Student h2{ "�Ӳ���", 30, 202503 }; // �ڽ�Ŭ���� ���� 
//	h2.getData();		// �θ�� ��ӹ��� �Ӽ��� ��µ�
//	h2.showStudnet();
//	return 0;
//}