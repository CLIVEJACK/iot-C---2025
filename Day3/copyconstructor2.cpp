///*
//	2. ���� ������: �Լ��� �ް������� ����Ҽ� ���� ������ (&)�����ϸ� �����ִ� 
//	���� �������� �ٽ� : �ްԺ����� ��ü�� �������� ��ü�� �ƴ� ������ �޾ƾ��Ѵ� 
//	���� ������: ��ü�� �Ӻ�� �޾Ƽ� ���ȭ �ؼ� �����
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char name[20];
//	int age;
//public:
//	Person(const char* name, int age) {
//		printf("Constructor call!!\n");
//		strcpy(this-> name, name);		// ������� ���� �ް����� ����
//		this->age = age;				// this �� �� �ڽžȿ� �ִ� ��?
//	}
//	Person(const Person& other) {			// ��������� / ��ü�� �����ؼ� ���ο� (�Լ�)�� ���簡? �޽�&�� ��ü�� �����Ѵ�
//		printf("copy constructor!!\n");		// �̰� ����Ǹ� ��������ڰ� �������
//		this->age = other.age;			
//		strncpy(this->name, other.name, strlen(other.name) + 1);		// strncpy �̰Ź���? 
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", this ->name,this-> age);
//	}
//};
//
//int main()
//{
//	Person p("ȫ�浿", 30);
//	p.printPerson();
//
//	Person p2(p);			// ���� �ֱ� / ���� �����ڰ� �ڵ����� ȣ��Ǽ� ������ 
//	p2.printPerson();
//
//	Person p3 = p;			// �����ؼ� �ֱ�
//	p3.printPerson();
//
//	return 0;
//}
//		/* �̰� ���� Person�� �����ڿ� ���ظ� �������� ������� */
////void a(int aa) {  // aa�� n�� �����ؼ� ���� 
////	aa++;
////}
////
////void main()
////{
////
////	int n = 10;
////	a(n);		// a��� �� ��°�n�� �����ؼ� ����
////}