///*
//	1. copyconstructor(���������) : �������� 1������ ����� 3�� ���� ������ ������ 1���� �̷���� 
//		�� ��ü�� ������ �ٸ� ��ü�� �����Ͽ� ������ ������
//		 �ڽŰ� ���� Ÿ���� ��ü�� ���ڷ� �޴´�.
//		���� �����ڰ� ���ǵǾ� ���� �ʴٸ� ����Ʈ ���� �����ڰ� �����ȴ�
//
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//	char m_name[20];		// m_name�� ������� / ���ڿ��� 20���� �������༭ 14���ٿ� 
//	int m_age;
//public:
//	Person(const char* pname, int age) {			// ������ ����/ �����ڴ� 1���� ��µ�
//		printf("Constructor call!!\n");				// �ؿ� ���ι����� ȣ���ߴµ� ����Ʈ�� 1���� ��µ�
//		strcpy(m_name, pname);
//		m_age = age;
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", m_name, m_age);
//	}
//
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