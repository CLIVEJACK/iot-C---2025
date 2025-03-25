/*
	11. weak_ptr: 레퍼런스 카운트에 영향을 주지않는 스마트 포인터
*/
#include <iostream>

class MyClass {
public:
	MyClass() { std::cout << "MyClass constructor!!" << std::endl; }
	~MyClass() { std::cout << "MyClass destructor!!: " << std::endl; }
	void func() { std::cout << "Hi shared_ptr" << std::endl; }
};

int main() 
{
	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();		//C++14이후부터 지원 /객채를 생성함
	std::weak_ptr<MyClass> weakPtr = ptr;		//weakPtr이게 make_shared이걸 참조한다

	// weak_ptr은 순환참조를 방지한다. / 순환참조: 객체2개가 서로 참조하고 둘다 shared_ptr로 참조하면 / 이러면 메모리 누수가 발생한다 두 값이 서로서로 참조해서 0이되지 않아 
	std::shared_ptr<MyClass> ptr2 = weakPtr.lock();			//weak_ptr에서 shared_ptr 변환
	if (ptr2) { std::cout << "weak_ptr로 변환한 shared_ptr 사용가능" << std::endl; }


	return 0;
}