///*
//	3.vector container 출력
//*/
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	printf("%d\n", v[2]);
//
//	/* 출력 1 */
//	for (auto i = 0; i < v.size(); i++) {
//		cout << v[i] << endl;
//		cout << v.at(i) << endl;	// at이라는 메서드를 호출하는 법. 함수호출처럼 가능/ 이게 좀더 안전하지만 느림
//	}
//	cout << endl<< endl; 
//
//	/* 출력 2 */
//	for (vector<int>::size_type i = 0; i < v.size(); i++) {  //벡러 라이브러리에있는 인트에 싸이즈타입 i를 쓴다
//		cout << v[i] << endl;
//	}
//	cout << endl << endl;
//
//	/* 출력 3 */
//	vector<int>::iterator iter;		// interator 반복자를 사용해서 출력
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << endl;
//	}
//	cout << endl << endl;
//	/* 출력 4 */
//	for (auto i : v) {			// 인텍스 값출력 못하는거 빼면 편함
//		cout << i << endl;
//	}
//
//	return 0;
//
//}
//
///*
//	
//*/