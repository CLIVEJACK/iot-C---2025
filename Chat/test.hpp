#pragma once
#include <iostream>
#include <string>
#include "chatDB.hpp"  // MySQLConnector 클래스를 포함하는 헤더

using namespace std;

class Message {
private:
    int msg_id;       // 메시지 ID
    int user_id;      // 보낸 사용자 ID
    string msg_text;  // 메시지 내용
    string msg_time;  // 메시지 보낸 시간
    Connection* conn; // MySQL 연결 객체

public:
    // `const char*` 대신 `const string&`을 사용하여 안정성 강화
    Message(int _msg_id, int _user_id, const string& _msg_text, const string& _msg_time, Connection* _conn)
        : msg_id(_msg_id), user_id(_user_id), msg_text(_msg_text), msg_time(_msg_time), conn(_conn) {
        if (!conn) { // `conn`이 nullptr이면 오류 발생 가능
            cerr << "Error: Connection pointer is null!" << endl;
        }
    }

    // 소멸자
    ~Message() {}

    //  함수명 오타 수정 (`print_Maessage` → `print_Message`)
    void print_Message() {
        cout << "msg_id: " << msg_id
            << " | user_id: " << user_id
            << " | msg_text: " << msg_text
            << " | msg_time: " << msg_time
            << " | conn: " << conn << endl;
    }
};
