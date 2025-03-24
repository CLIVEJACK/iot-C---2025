///*
//	7. 포인터를 통해서 접근할때는 '->(애로우)'를 쓰거나 '역참조(*ptr).' 를 써야한다
//*/
//
//#include <iostream>
//
//
//class MyClass {
//public:
//	int vlaue;
//	//MyClass() {};
//	MyClass(int v = 0) : vlaue(v) { }		//생성자
//	void showMyClass() {
//		std::cout << "vlaue: " << vlaue << std::endl;
//	}
//};
//int main()
//{
//
//	MyClass* ptr = new MyClass{ 10 };
//	ptr->showMyClass();		//->(애로우)는 함수를 지정해서 값을 나오게 가능하다
//	printf("value: %d\n", ptr->vlaue);
//
//	delete ptr;
//
//	MyClass obj{};		// 디폴트 생성자를 만들거나 생성자의 int인자를 =0을로 초기화 해주면 된다
//	ptr = &obj;
//
//	ptr->showMyClass();		// ->를 풀어서 쓰면 밑에있는 역참조가 된다.
//	(*ptr).showMyClass(); // 역참조를 사용할때는 괄호를 써야한다
//
//	printf("vlaue: %d\n", ptr->vlaue);
//
//	return 0;
//}