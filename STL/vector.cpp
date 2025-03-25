///*
//	1. vector : 다루기 쉬운 배열
//*/
//#include<iostream>
//#include<vector>			// vector 헤더파일 포함
//using namespace std;		// vector도 std안에 포함됨
//
//int main()
//{
//	vector<int> v;
//	vector<int> v1{ 10 };
//	vector<int> v2(5);					//int가 5개짜리 백터가 나온다
//	vector<int> v3{1, 2, 3, 4, 5 };
//
//	cout << "v size: " << v.size() << endl;			//v.size()함수를 이용하면 v의크기를 알수있음 /0개의 요소
//	cout << "v1 size: " << v1.size() << endl;		// 1개의 요소
//	cout << "v2 size: " << v2.size() << endl;		// 5개의 요소
//	cout << "v3 size: " << v3.size() << endl;		// 5개의 요소
//
//	for (int i = 0; i < 5; i++) {				
//		printf("v2[%d]: %d ",i ,v2[i]);		// vector는 초기화를 하지않으면 자동으로 0으로 초기화가 된다
//	}
//	cout << endl;
//	for (auto i : v3) {					// (auto i : v3)는 범위 기반 for문// 해석: v백터 v3의 값을 auto i의 값에 다가 저장한다
//		//cout << v3[i] << endl;			// 범위기반 for문은 인덱스 사용이 불가능
//		cout << i << endl;
//	}
//	/* begin()과 end()는 iterator(반복자) 타입을 반환하다.(포인터) /반복자의 타입은 포인터다 */
//	cout << "v3의 첫번쨰 요소값: " << *v3.begin() << endl; // 간접참조 연산자 *v3를 붙여야함
//	cout << "v3의 마지막 요소값: " << *(v3.end() - 1) << endl;	// end메서드드를 써서 마지막에 요소값을 확인하려면은 -1을 해야한다 따라서 end는 마지막 요소의 다음것을 반환하기때문에 -1을한다
//
//	return 0;
//}
//
///*
//	vector.size(): 원소 크기(갯수)를 반환 
//	vector.begin(): 첫번째의 주소를 반환한다
//	vector.end(): 마지막 주소의 다음주소를 반환한다
//
//*/