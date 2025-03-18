///*
//	19. 출력인 경우: 일반 변수 출력타입에 맞춰서 변수를 설정해야한다
//*/
//
//#include <iostream>
//
//int func(int anum)	// int 타입의 출력인데 참조를 쓴다면 상수가 되
//{
//	anum++;
//	return anum;
//}
//int main()
//{
//	int num = 10;
//	const int& res = func(num);			// 함수 자체에 저장하려면 const로 상수로 만들어서 (임시저장)임시객체를 만들어야한다
//										// 지역변수에서 끝난거 밖에다가 못씀
//
//	std::cout << res << std::endl;		// 11이 나와야함
//
//	return 0;
//
//}