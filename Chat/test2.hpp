//#pragma once
//#include <iostream>
//#include <string>
//#include "chatDB.hpp"  // MySQLConnector 클래스를 포함하는 헤더
//
//using namespace std;
//
//class Message {
//private:
//    //int msg_id;       // 메시지 ID
//    int user_id;      // 보낸 사용자 ID
//    string msg_text;  // 메시지 내용
//    string msg_time;  // 메시지 보낸 시간
//    Connection* conn; // MySQL 연결 객체
//
//public:
//    Message(int _user_id, const string& _msg_text, const string& _msg_time, Connection* _conn)
//        : user_id(_user_id), msg_text(_msg_text), msg_time(_msg_time), conn(_conn) {
//        if (!conn) { // conn이 nullptr이면 오류 발생 가능
//            cerr << "Error: Connection pointer is null!" << endl;
//        }
//    }
//    ~Message() {}
//
//    void print_Message() {
//
//        for (int i = 15; i >= 1; i--) {
//            SetConsoleOutputCP(CP_UTF8);
//            cout << u8"Message Info: "
//                /* << "msg_id: " << msg_id*/
//                << " | user_id: " << user_id
//                << " | msg_text: " << msg_text
//                << " | msg_time: " << msg_time
//                << endl;
//        }
//    }
//
//    //    void print_Message() {
//    //        SetConsoleOutputCP(CP_UTF8);
//    //        cout << u8"Message Info: "
//    //        /* << "msg_id: " << msg_id*/
//    //        << " | user_id: " << user_id
//    //        << " | msg_text: " << msg_text
//    //        << " | msg_time: " << msg_time
//    //        << endl;
//    //    }
//};