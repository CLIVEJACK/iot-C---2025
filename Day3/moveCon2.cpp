///*
//	8. 이동 생성자(T&&)
//	r-value refernce 를 파라미터로 갖는 이동 생성자
//	임시객체에 있는 데이터를 이동시킨다
//
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class Human {
//	char name[10];
//	int age;
//public:
//	// 입력을 2개 받는 생성자
//	Human(const char* name, int age){
//		cout << "생성자 입력 2개" << endl;
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	// 복사생성자
//	Human(const Human& other) {
//		cout << "복사생성자 호출" << endl;
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//	// 이동생성자
//	Human(Human&& other) noexcept {			//noexcept 예외를 발생할수없는 함수 
//		printf("이동 생성자 호출\n");
//		strcpy(this->name, other.name);
//		this->age = other.age;
//
//		//other.name = nullptr;
//		other.age = 0;			// 
//
//	}
//	void printHuman() {
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//
//	Human h("홍길동", 20);		
//	h.printHuman();			// 생성자 호출
//
//	Human h2(h);			// 복사 생성자
//	h2.printHuman();	
//
//	Human h3(move(h));		// 이동생성자를 통해서 출력 - 선언: (std::move(h)); 
//	h3.printHuman();		// 복사랑 다르게 마냥 이동만해서 빠르다.?
//	h.printHuman();
//
//	return 0;
//
//}
