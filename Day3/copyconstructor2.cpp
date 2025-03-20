///*
//	2. 복사 생성자: 함수에 메개변수로 사용할수 없다 하지만 (&)참조하면 쓸수있다 
//	복사 생성자의 핵심 : 메게변수로 객체를 받으려면 객체가 아닌 참조로 받아야한다 
//	복사 생성자: 객체를 임비로 받아서 상수화 해서 써야함
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
//		strcpy(this-> name, name);		// 멤버변수 네입 메개변수 네임
//		this->age = age;				// this 는 나 자신안에 있는 것?
//	}
//	Person(const Person& other) {			// 복사생성자 / 객체를 복사해서 새로운 (함수)를 만든가? 펄슨&은 객체를 참조한다
//		printf("copy constructor!!\n");		// 이게 실행되면 복사생성자가 만들어짐
//		this->age = other.age;			
//		strncpy(this->name, other.name, strlen(other.name) + 1);		// strncpy 이거뭐노? 
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", this ->name,this-> age);
//	}
//};
//
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
//		/* 이건 위에 Person의 생성자에 이해를 돕기위해 만들었음 */
////void a(int aa) {  // aa는 n을 복사해서 쓴다 
////	aa++;
////}
////
////void main()
////{
////
////	int n = 10;
////	a(n);		// a라는 걸 출력값n을 복사해서 쓴다
////}