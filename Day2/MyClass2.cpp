///*
//	5.MyClass.cpp를 생성자로 초기화 받기 속성이 3개로(생성자를 3개로) 
//*/
//#define _CRT_SECURE_NO_WARNINGS // strcpy를 쓰려고 씀
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	char *name;		
//	int age;
//public:
//	//void setData(int n1, const char* n2, int n3) { //	char* n2 은 김철수 라는 주소가 입력
//	//	id = n1;
//	//	strcpy(name, n2);
//	//	age = n3;
//	//}
//	//MyClass(){ }	// 디폴트 생성자
//	~MyClass() { delete[] name; }	// 소멸자(자동 호출된다. - 동적할당할 경우 말고 별도로 작성할 필요가 없다.) 객체를 소멸시긴다
//	MyClass(int _id, const char* _name, int _age);
//	void getData() const;			// 여기 const는 getData를 상수화
//};
//MyClass::MyClass(int _id, const char* _name, int _age) {				// 그래서 char는 포인터 연산자를써야한다 const가 main의 "김영희"가 상수여서 이걷도 상수로 만들어야함
//	id = _id;								//앞에 id는 속성(private에있는거) 뒤는 생성자
//	age = _age;
//	name = new char[strlen(_name) + 1];			//문자열 크기만큼 만들어야함 그리고 널문자를 넣기위해 +1을 해야한다 // 동적할당
//	//name = _name;							// 배열을 선언한 후에 대입 연산자를 사용하여 값을 직접 할당할 수 없다.
//	strcpy(name, _name);					// name을 _name가피
//}
//void MyClass::getData() const {				// 상수 멤버 함수(모든 멤버들을 상수화 시킨다.)
//	cout << "내 학번 ID: " << id << "내 이름은: " << name << "나이는: " << age << endl;
//}
//int main()
//{
//	//MyClass obj;
//	//obj.setData(1, "김철수", 20);			// 문자열은 주소다
//	//obj.getData();
//	MyClass obj (2, "김영희", 20);		//문자열은 주소 다 주소를 저장하는 연산자는 포인터 연산자다 
//	obj.getData();
//}