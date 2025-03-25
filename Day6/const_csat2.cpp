///*
//	4. class로 const_cast의 활용
//
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int num;
//public:
//	void setNum(int n) { num = n; }
//	void printf()const {
//		cout << "Befoer: " << num;
//		//num++;						// const 메서드로 이루어진 메서드여서 못씀
//		const_cast<MyClass*>(this)->num--; //const_cast 키워드는 const를 해제시켜서 포인터로 접근해서 값을 감소시킴
//		cout << " after: " << num <<endl;
//	}
//};
//
//int main()
//{
//	MyClass obj;
//	obj.setNum(10);
//	obj.printf();
//
//	return 0;
//}