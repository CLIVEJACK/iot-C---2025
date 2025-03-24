///*
//	2. protected (접근제어자): 상속받은 자식이 접근 가능하다. 
//*/
//
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class Human {
//protected:		// 상속되어진 
//	char name[20];
//	int age;
//public:
//	Human(const char* aname, int aage) {
//		strcpy_s(name,aname);
//		age = aage;
//	}
//	void getData() {
//		cout << "이름: " << name << "나이: " << age << endl;
//	}
//};
//class Student : public Human {
//private:
//	int studentID;
//public:
//	Student(const char* aname, int aage, int astudentID) : Human(aname, aage) {
//		studentID = astudentID;
//	}
//	void showStudnet() {
//		cout << "이름: " << name << ", 나이: " << age;		// 원래는 private로 싸져있으면 불가능
//		cout << "학번: " << studentID << endl;
//	}
//};
//
//int main() 
//{
//	Human h("홍길동", 25); // 부모클래스 생성
//	h.getData();
//
//	Student h2{ "임꺽정", 30, 202503 }; // 자식클래스 생성 
//	h2.getData();		// 부모들 상속받은 속성만 출력됨
//	h2.showStudnet();
//	return 0;
//}