///*
//	1.Inheritance(상속): 부모에서부터 자식에게 물려준다 
//	privete, public, protected 
//	is a(무엇은 무엇이다.), has a(소유) 관계가 성립해야 한다.
//	is a: 학생은 사람이다o, 사람은 학생이다x 처럼 is가 더 커야한다
//	
//*/
//#include <iostream>
//#include <string.h>
//
//class Human{		// 상위클래스, 기초클래스, 부모클래스, 베이스클래스
//private:
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);	// 부모 클래스터 생성자를 만들고 인자값을 작성한다
//	void getData();
//};
//class Student : public Human{		//상속 선언 - 상위클래스(부모) : public AClass  이런식으로 작성하면 상속관계 A에서 B로 받는다/ 자식클래스, 파생클래스, 서브클래스, 드라이버드 클래스
//private:
//	int studentID;
//public:
//	Student(const char* name, int age, int studentID);	// 부모의 속성까지도 초기값을 받아야하기때문에 입력값은 3개를 작성해야한다 부모에서 2개 자기자신의 1개 를 더해서 받아야함
//	void showStdent();
//
//};
//Human::Human(const char* aname, int aage) {		//외부에서 작성할때는 소속을 적어야한다 / 뒤에있는게 소속임 앞에는 누구인지 아는거(속성)
//	strcpy_s(name, aname);
//	age = aage;
//}
//void Human::getData() { // 소속은 메서드 앞에와야함
//	std::cout << "이름: " << name << "나이: " << age << std::endl;
//}
///* 상속받은 멤버들은 상속한 부모클래스의 생성자에서 초기화를 한다. */
//// 클래스의 초기화는 외부에서 실행한다
//Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage) { // 개체가 생성되기 전에 초기화하려면 콜론 초기화해야함(:)
//	//strcpy(name, aname);		이래 쓰면 자식을 초기화할때 부모도 초기화하라는 소리라 불가능
//	//age = aage;
//	studentID = astudentID;		
//}
//void Student::showStdent(){  // 멤버showStudent()의 소속을 Stdent이다
//	//std::cout << "이름: " << name << std::endl;		// 자식클래스에서 부모를 접근은 할수없다.
//	std::cout << "학번: " << studentID << std::endl;
//}
//int main()
//{
//	Human h("홍길동", 25); // 부모클래스 생성
//	h.getData();
//
//	Student h2{ "임꺽정", 30, 202503 }; // 자식클래스 생성 
//	h2.getData();		// 부모들 상속받은 속성만 출력됨
//	h2.showStdent();
//
//	return 0;
//}