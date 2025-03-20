///*
//	3. 이거 뭐하라고 했누? name 를 스텍에 동적매모리 할당하는거 > new
//	heap영역 다시보기 
//	p.224쪽에 그림보고 person의 생성자를 이해하면 쉬움
//	(deedp copy)복사 생성자
//	동적항당 받은 경우 복사하는 객체도 동적 할당 받아서 별개로 복사저장이 되어야한다
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
//		this-> name = new char(strlen(name) + 1);		// 동적할당 이거 소괄호인데?
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	Person(const Person& other) {
//		printf("copy constructor!!\n");
//		this-> name = new char[strlen(other.name) + 1]; // 대괄호 소괄호 하는이유?
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
//	Person p("홍길동", 30);
//	p.printPerson();
//
//	Person p2(p);			// 직접 넣기 / 복사 생성자가 자동으로 호출되서 생성됨 
//	p2.printPerson();
//
//	Person p3 = p;			// 복사해서 넣기
//	p3.printPerson();
//
//	return 0;
//}
///*
//	디폴트로 자동으로 제공받는 생성자: 디폴트 생성자, 복사 생성자, 소멸자
//*/