///*
//	1. copyconstructor(복사생성자) : 생성문은 1개지만 출력은 3번 나옴 하지만 생성은 1번만 이루어짐 
//		한 객체의 내용을 다른 객체로 복사하여 생성된 생성자
//		 자신과 같은 타입의 객체를 인자로 받는다.
//		복사 생성자가 정의되어 있지 않다면 디폴트 복사 생성자가 생성된다
//
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//	char m_name[20];		// m_name은 멤버변수 / 문자열을 20으로 고정해줘서 14번줄에 
//	int m_age;
//public:
//	Person(const char* pname, int age) {			// 생성자 생성/ 생성자는 1번만 출력됨
//		printf("Constructor call!!\n");				// 밑에 메인문에서 호출했는데 프린트는 1번만 출력됨
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