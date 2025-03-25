///*
//	4. vector coniner - 삽입, 삭제, 참조
//*/
//
//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
//
//void main()
//{
//	vector<string> v;
//	list<int> li;
//
//
//	v.push_back("tiger");
//	v.push_back("lionl");
//	v.push_back("웅나나");
//	v.push_back("방부웅나");
//	v.push_back("horse");
//
//	cout << "v.front(): " << v.front() << endl;		// front()는 맨첫번쨰 원소를 참조한다
//	cout << "v.back(): " << v.back() << endl;		// back()는 마지막 원소 출력
//	cout << "v.capacity: " << v.capacity() << endl;
//	cout << endl;
//
//	vector<string>::iterator iter;				//vector<템플릿>::iterator iter 템플릿만 바꾸면 다른 값도 적용가능하다.
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/";
//	}
//	cout << endl;
//	v.pop_back();				// 마지막꺼 삭제 
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/";
//	}
//	cout << endl;
//
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		if (*iter == "웅나나") {
//			v.erase(iter); break;			//erase은 조건이 맞으면 삭제 
//		}
//	}
//	cout << endl;
//
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/";
//	}
//
//}
//
///*
//	iterator 타입: iterator, begin(), end()
//*/