///*
//	8. 
//	char 포인터 name, int 타임의 age, 출력을 담당하는 showHuman()을 가지는 Human 클래스가 있다.
//	name을 동적할당하고 나이 30, 이름 홍명보 man 객체를 생성하시오.
//	man 객체를 복사하여 copyman 객체를 생성하시오.
//	메모리가 동적할당이 되면 새로운 값이 필요해서 오버로딩이 필요하다 35줄부터45까지 
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
//	const Human& operator=(const Human& rhs);			// 요거랑 
//};
//const Human& Human::operator=(const Human& rhs) {		//요  주소상수 > 주소에 저장된 값
//	if (this != &rhs) {					// 이건 값이 다르면 실행 해라
//		delete[] name;					// 초기값을 가기고 있는데 그걸 삭제하라
//		this->name = new char[strlen(rhs.name) + 1];
//		strcpy(this->name, rhs.name);
//		this->age = rhs.age;
//	}
//	return *this;
//}
//int main()
//{
//	Human man( "홍명보", 30);
//	man.showHuman();
//
//	Human copyman(man);
//	copyman.showHuman();
//
//	Human xman;
//	xman = copyman;		// 대입연산임 / 이건 얕은 대입 복사임 
//	xman.showHuman();		// 깊은 대입연산 사로 바꿔야한다 
//
//	return 0;
//}