///*
//	7. 임시객체는 참조를 사용할 수 없다.
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int num;
//public:
//	MyClass(int n) : num(n) {
//		cout << num << " constuctor" << endl;
//	}
//	~MyClass() { cout << num << " desturctior" << endl; }
//	void setData(int n) { num = n; }
//};
//
//int main()
//{
//	//MyClass* ptr = &MyClass{ 10 };
//	//MyClass& obj2 = MyClass{ 20 };			// 애는 참조가 안된다 /임시객체는 참조를 사용할 수 없다.
//
//	MyClass obj = MyClass{ 10 };				// 임시객체주소를 바로 참조해서 사용해서 삭제는 바로 삭제는 안된다 
//	obj.setData(20);							// 일이 다끝나고 20이라는 값을 삭제한다.
//
//	MyClass&& obj2 = MyClass{ 20 };			// &&는 rvalue를 참조한다는 소리
//	obj2.setData(22);						//
//
//	const MyClass obj3 = MyClass{ 30 };
//	//obj3.setData(33);						// 상수참조를 하므로 값변경은 불허한다. 그래서 setData가 안됨
//
//	cout << "Bye~~" << endl;				// 임시객체를 변경하거나 참조했기때문에 바로 삭제 되지않고 일이 다 끝난후에 삭제된다.
//	
//	return 0;
//}