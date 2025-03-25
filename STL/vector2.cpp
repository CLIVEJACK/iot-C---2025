///*
//	2.vector
//*/
//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int> v;	//벡터를 인트타입의 v로 지정한다
//	cout << "[ v[i], v.size(), v.capcity()] " << endl;
//	for (int i = 0; i <= 32; i++) {
//		v.push_back(i + 1);
//		cout << "[ " << v[i] << ", " << v.size() << ", " << v.capacity() << " ]" << endl;
//	}
//
//	vector<int> v2;
//	v2.push_back(10);			//차곡차곡 순서대로 넣을때는 push_back함수를쓰기
//	v2.push_back(11);
//	v2.push_back(12);
//	v2.push_back(13);
//	v2.insert(v2.begin(), 1);
//	v2.insert(find(v2.begin(), v2.end(), 13), 20);		// find는 찾는다는 의미/ v2의 begin()첨부터 v2.end() 끝까지 중에 원소 13을 찾아서 20을 13앞에 집어넣는다
//
//
//	for (auto i : v2) {
//		cout << i << endl;
//	}
//	cout <<"============================" << endl;
//	v2.pop_back();		// 마지막 원소를 제거한다는 의미
//	for (auto i : v2) {
//		cout << i << endl;
//	}
//	return 0;
//}
//
///*
//* v.push_back(10): 마지막 원소 뒤에 10을 추가한다.
//* v.insert(idx, val): idx번쨰 위치에 val을 넣는다.
//* v.capacity(): 벡터에 할당된 메모리 크리를 리턴한다. - v.size()
//* v.pop_back(): 마지막 원소제거 
//*/