///*
//	5.MyClass.cpp�� �����ڷ� �ʱ�ȭ �ޱ� �Ӽ��� 3����(�����ڸ� 3����) 
//*/
//#define _CRT_SECURE_NO_WARNINGS // strcpy�� ������ ��
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	char *name;		
//	int age;
//public:
//	//void setData(int n1, const char* n2, int n3) { //	char* n2 �� ��ö�� ��� �ּҰ� �Է�
//	//	id = n1;
//	//	strcpy(name, n2);
//	//	age = n3;
//	//}
//	//MyClass(){ }	// ����Ʈ ������
//	~MyClass() { delete[] name; }	// �Ҹ���(�ڵ� ȣ��ȴ�. - �����Ҵ��� ��� ���� ������ �ۼ��� �ʿ䰡 ����.) ��ü�� �Ҹ�ñ��
//	MyClass(int _id, const char* _name, int _age);
//	void getData() const;			// ���� const�� getData�� ���ȭ
//};
//MyClass::MyClass(int _id, const char* _name, int _age) {				// �׷��� char�� ������ �����ڸ�����Ѵ� const�� main�� "�迵��"�� ������� �̰ȵ� ����� ��������
//	id = _id;								//�տ� id�� �Ӽ�(private���ִ°�) �ڴ� ������
//	age = _age;
//	name = new char[strlen(_name) + 1];			//���ڿ� ũ�⸸ŭ �������� �׸��� �ι��ڸ� �ֱ����� +1�� �ؾ��Ѵ� // �����Ҵ�
//	//name = _name;							// �迭�� ������ �Ŀ� ���� �����ڸ� ����Ͽ� ���� ���� �Ҵ��� �� ����.
//	strcpy(name, _name);					// name�� _name����
//}
//void MyClass::getData() const {				// ��� ��� �Լ�(��� ������� ���ȭ ��Ų��.)
//	cout << "�� �й� ID: " << id << "�� �̸���: " << name << "���̴�: " << age << endl;
//}
//int main()
//{
//	//MyClass obj;
//	//obj.setData(1, "��ö��", 20);			// ���ڿ��� �ּҴ�
//	//obj.getData();
//	MyClass obj (2, "�迵��", 20);		//���ڿ��� �ּ� �� �ּҸ� �����ϴ� �����ڴ� ������ �����ڴ� 
//	obj.getData();
//}