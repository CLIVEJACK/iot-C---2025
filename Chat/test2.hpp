//#pragma once
//#include <iostream>
//#include <string>
//#include "chatDB.hpp"  // MySQLConnector Ŭ������ �����ϴ� ���
//
//using namespace std;
//
//class Message {
//private:
//    //int msg_id;       // �޽��� ID
//    int user_id;      // ���� ����� ID
//    string msg_text;  // �޽��� ����
//    string msg_time;  // �޽��� ���� �ð�
//    Connection* conn; // MySQL ���� ��ü
//
//public:
//    Message(int _user_id, const string& _msg_text, const string& _msg_time, Connection* _conn)
//        : user_id(_user_id), msg_text(_msg_text), msg_time(_msg_time), conn(_conn) {
//        if (!conn) { // conn�� nullptr�̸� ���� �߻� ����
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