///*
//	1.Inheritance(���): �θ𿡼����� �ڽĿ��� �����ش� 
//	privete, public, protected 
//	is a(������ �����̴�.), has a(����) ���谡 �����ؾ� �Ѵ�.
//	is a: �л��� ����̴�o, ����� �л��̴�x ó�� is�� �� Ŀ���Ѵ�
//	
//*/
//#include <iostream>
//#include <string.h>
//
//class Human{		// ����Ŭ����, ����Ŭ����, �θ�Ŭ����, ���̽�Ŭ����
//private:
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);	// �θ� Ŭ������ �����ڸ� ����� ���ڰ��� �ۼ��Ѵ�
//	void getData();
//};
//class Student : public Human{		//��� ���� - ����Ŭ����(�θ�) : public AClass  �̷������� �ۼ��ϸ� ��Ӱ��� A���� B�� �޴´�/ �ڽ�Ŭ����, �Ļ�Ŭ����, ����Ŭ����, ����̹��� Ŭ����
//private:
//	int studentID;
//public:
//	Student(const char* name, int age, int studentID);	// �θ��� �Ӽ������� �ʱⰪ�� �޾ƾ��ϱ⶧���� �Է°��� 3���� �ۼ��ؾ��Ѵ� �θ𿡼� 2�� �ڱ��ڽ��� 1�� �� ���ؼ� �޾ƾ���
//	void showStdent();
//
//};
//Human::Human(const char* aname, int aage) {		//�ܺο��� �ۼ��Ҷ��� �Ҽ��� ������Ѵ� / �ڿ��ִ°� �Ҽ��� �տ��� �������� �ƴ°�(�Ӽ�)
//	strcpy_s(name, aname);
//	age = aage;
//}
//void Human::getData() { // �Ҽ��� �޼��� �տ��;���
//	std::cout << "�̸�: " << name << "����: " << age << std::endl;
//}
///* ��ӹ��� ������� ����� �θ�Ŭ������ �����ڿ��� �ʱ�ȭ�� �Ѵ�. */
//// Ŭ������ �ʱ�ȭ�� �ܺο��� �����Ѵ�
//Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage) { // ��ü�� �����Ǳ� ���� �ʱ�ȭ�Ϸ��� �ݷ� �ʱ�ȭ�ؾ���(:)
//	//strcpy(name, aname);		�̷� ���� �ڽ��� �ʱ�ȭ�Ҷ� �θ� �ʱ�ȭ�϶�� �Ҹ��� �Ұ���
//	//age = aage;
//	studentID = astudentID;		
//}
//void Student::showStdent(){  // ���showStudent()�� �Ҽ��� Stdent�̴�
//	//std::cout << "�̸�: " << name << std::endl;		// �ڽ�Ŭ�������� �θ� ������ �Ҽ�����.
//	std::cout << "�й�: " << studentID << std::endl;
//}
//int main()
//{
//	Human h("ȫ�浿", 25); // �θ�Ŭ���� ����
//	h.getData();
//
//	Student h2{ "�Ӳ���", 30, 202503 }; // �ڽ�Ŭ���� ���� 
//	h2.getData();		// �θ�� ��ӹ��� �Ӽ��� ��µ�
//	h2.showStdent();
//
//	return 0;
//}