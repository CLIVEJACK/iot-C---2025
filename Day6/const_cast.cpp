///*
//	3.const_cast: const ������ �����Ѵ�.
//*/
//
//#include <iostream>
//
//int main()
//{
//	int num = 10;
//	std::cout << ++num << std::endl;
//
//	const int num2 = 10;
//	//std::cout << ++num2 << std::endl;			// �̰� const(���)�� �ȹٲ�
//	
//	/* �̰� ������� ��Ǯ����
//	int* np = const_cast<int*>(&num2);
//	*np += 1;
//	std::cout << "num2: "<< num2 << std::endl;
//	*/
//
//	const char str[] = "orange";
//	char* cp = const_cast<char*>(str);			// �����ִ� const char�� str�� const_cast�� �����ϰڴ� 
//	cp[0] = '0';
//	std::cout << str << std::endl;
//
//	return 0;
//}