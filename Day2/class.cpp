///*
//	1. class
//*/
//#include <iostream>
//using namespace std;
//
//class A {					// class 클래스이름(대문자) { }			
//public:			//privte:를 하면 main 접근이 불가능해짐. // 접근지시자
//	int m_num;					// 맴버 변수(속성) m_라는 키워드는 멤버변수이다 라는 것
//
//	void set(int num) {
//		m_num = num;
//	}
//
//	void print() {				// 맴버 함수(기능), 메서드라고도 불림
//		cout << "나는 A클래스의 인스턴스 입니다. " << "num: "<< m_num << endl;
//	}
//};
//
//int main()
//{
//	//A obj(10);			이건 클래스의 고유한 특징이다 값을 초기화하지 않는 것
//	A obj;		//	객체를생성// 변수선언 형태와 동일 'A'는 타입이고'obj'라는 변수이름이다. (int a)랑 비슷한 원리 
//	// int n;			위랑 같다
//	// A클래스로 만들어짐 obj객체	
//	// 객체를 생성하기 위해서는 생성자를 호출해야한다
//
//	obj.print();		// 맴버접근 연산자'.'을사용해서 print를 출력
//	obj.set(10);		//obj의 set을불러와서 10을 넣는다
//	obj.print();
//	return 0;
//}