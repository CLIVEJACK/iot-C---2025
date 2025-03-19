///*
//	4.MyClass생성 생성자
//	문자열을 출력하는방법(여러가지출력하는방법)
//*/
//#define _CRT_SECURE_NO_WARNINGS // strcpy를 쓰려고 씀
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	char name[20];		// 배열이름은 주소다 주소에다가 값은 못넣는다 char name[20]에서 name는 배열의 이름인데 이름은 주소다 주소는 값이 아니기때문에 
//	int age;
//public:
//	void setData(int n1, const char* n2, int n3) { //	char* n2 은 김철수 라는 주소가 입력
//		id = n1;
//		// 주소 = rvalue
//		// name = n2
//		strcpy(name, n2); 
//		age = n3;
//		cout << "내 ID:" << id << "내 이름은: " << name << "나이는: " << age << endl;
//	}
//	void getData() {
//		id = 0;							//초기화
//		strcpy(name, " ");
//		age = 0;
//		cout << "내 ID:" << id << "내 이름은: " << name << "나이는: " << age << endl;
//	}
//};
//int main()
//{
//	MyClass obj;
//	obj.setData(1, "김철수", 20);			// 문자열은 주소다
//	obj.getData();
//}
