///*
//	6.tempobj 
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) : num(n) {
//		cout << num << "constructor" << endl;
//	}
//	~MyClass(){ cout << num << "destructor" << endl; }
//};
//
//int main()
//{	
//	MyClass obj{ 10 };
//	MyClass obj2 = MyClass{ 20 };		// MyClass{ 20 }은 이름(객체)없는 임시객체를 복사해서 저장한다는 뜻임
//	MyClass{ 30 };						// MyClass{ 30 }은 30이라는 임시객체
//										// 이름없는 객체는 변경하거나 명시하지 않으면 바로 다음행이 실행되거나 바로다음행으로 넘어가면 삭제됨
//
//	cout << "bye~~" << std::endl;
//
//	return 0;
//}