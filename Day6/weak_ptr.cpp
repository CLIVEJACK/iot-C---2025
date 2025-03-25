/*
	11. weak_ptr: ���۷��� ī��Ʈ�� ������ �����ʴ� ����Ʈ ������
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
	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();		//C++14���ĺ��� ���� /��ä�� ������
	std::weak_ptr<MyClass> weakPtr = ptr;		//weakPtr�̰� make_shared�̰� �����Ѵ�

	// weak_ptr�� ��ȯ������ �����Ѵ�. / ��ȯ����: ��ü2���� ���� �����ϰ� �Ѵ� shared_ptr�� �����ϸ� / �̷��� �޸� ������ �߻��Ѵ� �� ���� ���μ��� �����ؼ� 0�̵��� �ʾ� 
	std::shared_ptr<MyClass> ptr2 = weakPtr.lock();			//weak_ptr���� shared_ptr ��ȯ
	if (ptr2) { std::cout << "weak_ptr�� ��ȯ�� shared_ptr ��밡��" << std::endl; }


	return 0;
}