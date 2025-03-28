#pragma once
#include <iostream>
#include <string>
#include <windows.h> // UTF-8 ����� ���� ���
#include "chatDB.hpp"  // MySQLConnector Ŭ������ �����ϴ� ���

using namespace std;

class Message {
private:
    Connection* conn; // MySQL ���� ��ü
public:
    Message(Connection* _conn) : conn(_conn) {
        if (!conn) {
            cerr << "Error: Connection pointer is null!" << endl;
        }
    }
    ~Message() {}

    void print_Message() {
        try {
            string query = "SELECT u.user_name, m.msg_text, m.msg_time FROM Message m Join User u on m.user_id = u.user_id LIMIT 15";
            unique_ptr<Statement> stmt(conn->createStatement());
            unique_ptr<ResultSet> res(stmt->executeQuery(query));

            SetConsoleOutputCP(CP_UTF8); // �ѱ� ��� ����

            while (res->next()) {
                int user_id = res->getInt("user_id");
                string msg_text = res->getString("msg_text");
                string msg_time = res->getString("msg_time");

                cout << u8"Message Info: "
                    << " | user_id: " << user_id
                    << " | msg_text: " << msg_text
                    << " | msg_time: " << msg_time
                    << endl;
            }
        }
        catch (SQLException& e) {
            cerr << "SQL Error: " << e.what() << endl;
        }
    }
    //int countMessage(){
    //    int count = 0;
    //    try{
    //        string query = "SELECT COUNT(msg_id) AS total FROM Message";
    //        unique_ptr<Statement> stmt(conn->createStatement());
    //        unique_ptr<ResultSet> res(stmt->executeQuery(query));

    //        if (res->next()) {
    //            count = res->getInt("total");
    //        }
    //    }
    //    catch (SQLException& e) {
    //        cerr << "SQL Error: " << e.what() << endl;
    //    }
    //    return 0;
    //
    //}
};
