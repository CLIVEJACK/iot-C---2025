///*
//	6.MyClass.cpp의 "김철수만" 문자열을 동적할당을 하기 
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	char* name;		
//	int age;
//public:
//	void setData(int n1, char* n2, int n3) { 
//		id = n1;
//		// 주소 = rvalue
//		// name = n2
//		strcpy(name, n2);
//
//		age = n3;
//	}
//	void getData() {
//		cout << "내 ID:" << id << "내 이름은:" << name << "나이는: " << age << endl;
//	}
//};
//int main()
//{
//	MyClass obj;
//	obj.setData(1, "김철수", 20);			// 문자열은 주소다
//	obj.getData();
//}
