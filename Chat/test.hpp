#pragma once
#include <iostream>
#include <string>
#include "chatDB.hpp"  // MySQLConnector Ŭ������ �����ϴ� ���

using namespace std;

class Message {
private:
    int msg_id;       // �޽��� ID
    int user_id;      // ���� ����� ID
    string msg_text;  // �޽��� ����
    string msg_time;  // �޽��� ���� �ð�
    Connection* conn; // MySQL ���� ��ü

public:
    // `const char*` ��� `const string&`�� ����Ͽ� ������ ��ȭ
    Message(int _msg_id, int _user_id, const string& _msg_text, const string& _msg_time, Connection* _conn)
        : msg_id(_msg_id), user_id(_user_id), msg_text(_msg_text), msg_time(_msg_time), conn(_conn) {
        if (!conn) { // `conn`�� nullptr�̸� ���� �߻� ����
            cerr << "Error: Connection pointer is null!" << endl;
        }
    }

    // �Ҹ���
    ~Message() {}

    //  �Լ��� ��Ÿ ���� (`print_Maessage` �� `print_Message`)
    void print_Message() {
        cout << "msg_id: " << msg_id
            << " | user_id: " << user_id
            << " | msg_text: " << msg_text
            << " | msg_time: " << msg_time
            << " | conn: " << conn << endl;
    }
};
