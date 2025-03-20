///*
//	6.변환생성자 : 매개변수가 하나뿐인 생성자를 변환 생성자라고한다 
//	묵시적 변환을 통해 임시 객체가 생성될 가능성을 가지고 있다 > 
//	묵시적 변환: 어떠한 함수가 있을때 이 함수의 매개변수의 자료형이 객체라면 실인수의 값은 자료형에 맞는 객체를 대입해야 정상적으로 작동하는데 
//	변환 생성자의 경우 묵시적 변환을 통해서 그 객체가 아닌 객체가 가지고 있는 멤버의 타빙으로도 생성자의 호출이 이루어지는 경우를 말한다.
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int value;
//public:
//	explicit MyClass(int value) {			// explicit 묵시적으로 변환이 일어나는걸 방지함
//		printf("변환 생성자 호출!!\n");
//		this->value = value;
//	}
//	void printMyClass() {
//		printf("value: %d\n", value);
//	}
//};
//
//int main()
//{
//	//MyClass obj = 10;		// 변환생성자 호출 -- 객체의 변환이 일어남 / 오류
//	//obj.printMyClass();	// 
//
//	MyClass obj2{ 10 };		// 인자 값을 하나만 받는 것 
//	obj2.printMyClass();
//
//	return 0;
//}