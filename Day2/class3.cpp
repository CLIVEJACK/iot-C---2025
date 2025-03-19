///*
//	3.class 
//	생성자 constructor
//	생성자 호출로 객체가 만들어진다.
//	객체 생성시 구조에 맞는 생성자가 없으면 객체는 생성되지 않는다.
//	생성자는 초기화 기능에 사용한다.
//	생성자는 오버로딩이 가능하다.
//	프로그래머가 생성자를 작성하면 더 이상 디폴트 생성자는 제공되지 않는다.
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int m_num1;
//	int m_num2;
//public:
//	MyClass() {}		// main에 MyClass obj; 디폴트로 생성하면 이런식으로 디폴트로 생성하면 가능하다 
//	MyClass(int num1, int num2) {				//명시함	// 클래스 이름과 같아야함(입력){조건} / 생성자(입력받는두개 받는 값)
//		m_num1 = num1;
//		m_num2 = num2;
//	}
//	~MyClass(){}					// 소멸자는 디폴트 생성자에서 앞에 `~`추가해하면됨
//	void printData() {
//		cout << "나는 MyClass의 인스턴스 입니다.";
//		cout << "m_num1: "<< m_num1 << "m_num2: "<< m_num2<< endl;
//		cout << "m_num1: " << m_num1 << "m_num2: " << m_num2 << endl;
//	}
//};
//int main()
//{
//	MyClass obj;		// 디폴트 생성자를 받기때문에 문제없이 작동해야하지만 명시적으로 생성자를 생성하면 디폴트 생성자는 호출되지 않는다
//	MyClass obj2(100, 200);		// 생성과 초기화는 같이 못하지만 2개의 초기화를 받는 걸 생성해야 가능
//	obj2.printData();	
//
//	return 0;
//}