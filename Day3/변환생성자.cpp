/*
	4.변환 생성자
	다른 타입의 객체로 변환될떄 호출되는 생성자. 입력을 한개만 가지는 생성자
*/
#include <iostream>

class MyClass {
private:
	int value;
public:
	MyClass(int value) {					// 변환생성자
		printf("변환 생성자 호출!!");
		this -> value = value;
	}
	void printMyClass() {
		printf("value: %d\n", value);
	}
};

int main()
{
	/*MyClass obj;*/		// 객채를 생성할 생성자가 없어서 오류
	MyClass obj = 10;		// int타입의 클래스가 마이클래스 타입으로 바뀜 > 타입이 같아야 호출이 되지만 타입을 마이클래스로 바꿔서 위에있는 마이클래스가(변환생성자가) 작동함
	obj.printMyClass();		// obj가 value 값이 된다? > 10


	MyClass obj2 = 10;		// 이런형태로 변환하라 
	obj2.printMyClass();

	return 0;
}