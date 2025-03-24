///*
//	13. 추상자료형을 이용해서 동적할당된 객체를 참조할때는 메모리 해제 시 참조 타입의 소멸자만 호출되어 메모리 누수가 발생.
//	따라서 상위 클래스의 소멸자를 가상으로 만들어 실타입의 소멸자호출을 유도한다.
//*/
//#include <iostream>
//using namespace std;
//
//class CTest {
//private:
//	int num;
//public:
//	CTest(int anum) : num(anum) { cout << num << " CTest consturctor" << endl; }
//	virtual ~CTest() { cout << num << " CTest destructor" << endl; }		// 가상 소멸자 - 앞에다가 virtual을 넣어 메모리 누수를 막을수있다
//	virtual void Vfunc() { cout << "CTest virtual function()" << endl; }
//	void func() { cout << "CTest function()" << endl; }
//};
//class CTestSub :public CTest {
//private:
//	int subN;
//public:
//	CTestSub(int an1, int an2) : CTest(an1), subN(an2) { cout << subN << " CTestSub cnostructor" << endl; }
//	~CTestSub() { cout << subN << " CTestSub destructor" << endl; }
//	void Vfunc() { cout << "CTestSub function() override" << endl; }
//};
//
//int main()
//{
//
//	CTest obj(1);
//	cout << "=======================================" << endl;
//	CTestSub obj2(2, 22);
//	cout << "=======================================" << endl;
//	obj.func();
//	obj.Vfunc();
//	cout << "=======================================" << endl;
//	obj2.func();			// 자식 클래스의 함수가 없으면 부모클래스의 func()함수를 물려받아서 출력하고 
//	obj2.Vfunc();			
//	cout << "=======================================" << endl;
//
//	CTest* ptr = new CTestSub(3, 33);		// 객체 동적할당시 생성은 이루어지지만 삭제가 이루어지지않음 (제대로 삭제가 안됨 문제 발생) - 메모리 누수
//											// 메모리 누수가 발생시 삭제 메개변수앞에 virtual을 넣는다
//	delete ptr;
//
//	return 0;
//}