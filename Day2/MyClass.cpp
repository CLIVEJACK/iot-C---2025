///*
//	4.MyClass���� ������
//	���ڿ��� ����ϴ¹��(������������ϴ¹��)
//*/
//#define _CRT_SECURE_NO_WARNINGS // strcpy�� ������ ��
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	char name[20];		// �迭�̸��� �ּҴ� �ּҿ��ٰ� ���� ���ִ´� char name[20]���� name�� �迭�� �̸��ε� �̸��� �ּҴ� �ּҴ� ���� �ƴϱ⶧���� 
//	int age;
//public:
//	void setData(int n1, const char* n2, int n3) { //	char* n2 �� ��ö�� ��� �ּҰ� �Է�
//		id = n1;
//		// �ּ� = rvalue
//		// name = n2
//		strcpy(name, n2); 
//		age = n3;
//		cout << "�� ID:" << id << "�� �̸���: " << name << "���̴�: " << age << endl;
//	}
//	void getData() {
//		id = 0;							//�ʱ�ȭ
//		strcpy(name, " ");
//		age = 0;
//		cout << "�� ID:" << id << "�� �̸���: " << name << "���̴�: " << age << endl;
//	}
//};
//int main()
//{
//	MyClass obj;
//	obj.setData(1, "��ö��", 20);			// ���ڿ��� �ּҴ�
//	obj.getData();
//}
