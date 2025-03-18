///*
//	8. 디폴트 매개변수를 여러개 적용할 때는 맨 오른쪽부터 작성한다.
//*/
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int coordinates(int x, int y = 0, int z = 0);			// default값은 선언(원형)에서만 작성할수있다. ??
//int main()												// default값의 매개변수는 오른쪽부터 선언이된다 
//{
//	cout << "(10, 20, 30): " << coordinates(10, 20, 30) << endl;
//	cout << "(10, 20, 30): " << coordinates(10, 20) << endl;
//	cout << "(10, def, def): " << coordinates(10) << endl;
//
//	return 0;
//}
//
//int coordinates(int x, int y, int z)
//{
//	int res = 0;
//	res = pow(x, 2) + pow(y, 2) + pow(z, 2);	// pow()는 x^2,y^2,z^2 식으로 제곱을 한다 제곱
//	return sqrt(res);					// 제곱근
//}