///*
//	3. �̰� ���϶�� �ߴ�? name �� ���ؿ� �����Ÿ� �Ҵ��ϴ°� > new
//	heap���� �ٽú��� 
//	p.224�ʿ� �׸����� person�� �����ڸ� �����ϸ� ����
//	(deedp copy)���� ������
//	�����״� ���� ��� �����ϴ� ��ü�� ���� �Ҵ� �޾Ƽ� ������ ���������� �Ǿ���Ѵ�
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char *name;
//	int age;
//public:
//	Person(const char* name, int age) {
//		printf("Constructor call!!\n");
//		this-> name = new char(strlen(name) + 1);		// �����Ҵ� �̰� �Ұ�ȣ�ε�?
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	Person(const Person& other) {
//		printf("copy constructor!!\n");
//		this-> name = new char[strlen(other.name) + 1]; // ���ȣ �Ұ�ȣ �ϴ�����?
//		this->age = other.age;
//		strncpy(this->name, other.name, strlen(other.name) + 1);
//	}
//	~Person() {
//		delete[] this -> name;		
//	}
//
//	void printPerson() {
//		printf("name: %s, age: %d\n", this-> name, this->age);
//	}
//
//};
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
///*
//	����Ʈ�� �ڵ����� �����޴� ������: ����Ʈ ������, ���� ������, �Ҹ���
//*/