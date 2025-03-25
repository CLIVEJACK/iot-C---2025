///*
//	8.임시객체 copy
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//	int num;
//public:
//	MyClass(int n) : num(n) { cout << this << ", " << num <<" consturctor" << endl;} // this는 자기자신 포인터
//	MyClass(const MyClass& other) : num(other.num) { cout << this << " copy constructor" << endl; }	// MyClass&(복사생성자)는 참조연산자를 이용해서 MyClass를 복사해서 가져온다는 소리
//	~MyClass() { cout << this << ", " << num << " desturctor" << endl; }
//	void setData(int n) { num = n; }	//메서드에서는 : num(n)콜론 초기화가 안된다 생성자에서만 초기화가능
//};
//MyClass func(MyClass& aobj) {				//22행의 obj는 다른거임 / 메개변수 선언하는 이유는 복사해서 쓰겠다는 의미이다.
//	cout << "func()" << endl;
//	return aobj;
//}
//int main()
//{
//	MyClass obj{ 10 };
//	MyClass obj2{ func(obj) };		//15행의 obj와/ 임시객체로 전달됨
//	cout << "bye~~" << endl;
//	
//	return 0;
//}