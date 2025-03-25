///*
//	10. shared_ptr
//	make_shared: 객체와 참조 카운트를 하나의 메모리블록에 같이 할당시킨다. shared_ptr을 생성하는 함수다.
//	shared_ptr는 참조 카운트를 통해 객체의 소유권을 공유한다. 여러개의 shared_ptr이 객체를 참조할 수 있으며
//	레퍼런스 카운트가 0이되면 메모리가 자동 해제된다.
//	참조 카운트 : 객체가 자기자신을 가리키는 포인터가 몇개인지 세는 것 이게 0이되면 객체는 삭제한다
//*/
//#include <iostream>
//
//class MyClass {
//public:
//	MyClass() { std::cout << "MyClass constructor!!" << std::endl; }
//	~MyClass() { std::cout << "MyClass destructor!!: " << std::endl; }
//	void func() { std::cout << "Hi shared_ptr" << std::endl; }
//};
//
//int main()
//{
//	std::shared_ptr<MyClass>ptr = std::make_shared<MyClass>(); //make_shared을 MyClass로 생성 출력도 /std::와 endl을 넣어서 출력도 가능
//	std::shared_ptr<MyClass>ptr2 = ptr;			//shared_ptr은 공유한다 
//	printf("ptr과 ptr2는 동일한 객체를 가리킨다. 공유한다.\n");
//
//	ptr2->func();
//
//	return 0;
//}