///*
//	8. 
//	char ������ name, int Ÿ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
//	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ�� man ��ü�� �����Ͻÿ�.
//	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
//	�޸𸮰� �����Ҵ��� �Ǹ� ���ο� ���� �ʿ��ؼ� �����ε��� �ʿ��ϴ� 35�ٺ���45���� 
//*/
//#define _CRT_SECURE_NO_WARNINGS
//# include <iostream>
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	Human(const char* m_name = "default", int m_age = 0) {
//		printf("constructor~\n");
//		name = new char[strlen(m_name) + 1];
//		strcpy(name, m_name);
//		age = m_age;
//	}
//	Human(const Human& other) {
//		printf("copy constructor~\n");
//		name = new char[strlen(other.name) + 1];
//		strcpy(name, other.name);
//		age = other.age;
//	}
//	~Human() {
//		printf("destructor~\n");
//		delete[] name;
//	}
//	void showHuman() {
//		printf("name: % s, age : % d\n", name, age);
//	}
//	const Human& operator=(const Human& rhs);			// ��Ŷ� 
//};
//const Human& Human::operator=(const Human& rhs) {		//��  �ּһ�� > �ּҿ� ����� ��
//	if (this != &rhs) {					// �̰� ���� �ٸ��� ���� �ض�
//		delete[] name;					// �ʱⰪ�� ����� �ִµ� �װ� �����϶�
//		this->name = new char[strlen(rhs.name) + 1];
//		strcpy(this->name, rhs.name);
//		this->age = rhs.age;
//	}
//	return *this;
//}
//int main()
//{
//	Human man( "ȫ��", 30);
//	man.showHuman();
//
//	Human copyman(man);
//	copyman.showHuman();
//
//	Human xman;
//	xman = copyman;		// ���Կ����� / �̰� ���� ���� ������ 
//	xman.showHuman();		// ���� ���Կ��� ��� �ٲ���Ѵ� 
//
//	return 0;
//}