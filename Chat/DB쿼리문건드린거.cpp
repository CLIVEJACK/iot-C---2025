#pragma once
#include <iostream>
#include <string>
#include <windows.h> // �ѱ۱��� ����
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
    /* �׳� 15�� ���������� ����ϴ°� */
    //void print_Message() {
    //    try {
    //        string query = R"(
    //            SELECT u.user_name, m.msg_text, m.msg_time 
    //            FROM Message m 
    //            JOIN User u ON m.user_id = u.user_id
    //            LIMIT 15
    //        )";
    //        unique_ptr<Statement> stmt(conn->createStatement());
    //        unique_ptr<ResultSet> res(stmt->executeQuery(query));

    //        SetConsoleOutputCP(CP_UTF8); // �ѱ� ��� ����

    //        while (res->next()) {
    //            string user_name = res->getString("user_name");
    //            string msg_text = res->getString("msg_text");
    //            string msg_time = res->getString("msg_time");

    //            cout << u8"Message Info: "
    //                << " | user_name: " << user_name
    //                << " | msg_text: " << msg_text
    //                << " | msg_time: " << msg_time
    //                << endl;
    //        }
    //    }
    //    catch (SQLException& e) {
    //        cerr << "SQL Error: " << e.what() << endl;
    //    }
    //}
    // 
    //msg_id ������ ���� �Լ� �߰�
    int countMessages() {
        int count = 0;
        try {
            string query = "SELECT COUNT(msg_id) AS total FROM Message";
            unique_ptr<Statement> stmt(conn->createStatement());
            unique_ptr<ResultSet> res(stmt->executeQuery(query));

            if (res->next()) {
                count = res->getInt("total");
            }
        }
        catch (SQLException& e) {
            cerr << "SQL Error: " << e.what() << endl;
        }
        return count;
    }
    //���� 15�� ����ϴ°� 

    void print_Message() {
        int totalMessages = countMessages(); // �� �޽��� ���� ��������

        if (totalMessages == 0) {
            cout << "No messages found in the database." << endl;
            return;
        }

        SetConsoleOutputCP(CP_UTF8); // �ѱ� ��� ����
        cout << "Total Messages: " << totalMessages << endl;

        int offset = 0; // ����� �޽����� ���� ��ġ
        const int LIMIT = 15; // �� ���� ����� �޽��� ����

        while (offset < totalMessages) {
            try {
                // �ֽ� �޽������� 15���� ��������
                string query = "SELECT u.user_name, m.msg_text, m.msg_time "
                    "FROM Message m "
                    "JOIN User u ON m.user_id = u.user_id "
                    "ORDER BY m.msg_id DESC "
                    "LIMIT " + to_string(LIMIT) + " OFFSET " + to_string(offset);

                unique_ptr<Statement> stmt(conn->createStatement());
                unique_ptr<ResultSet> res(stmt->executeQuery(query));

                while (res->next()) {
                    string user_name = res->getString("user_name");
                    string msg_text = res->getString("msg_text");
                    string msg_time = res->getString("msg_time");

                    cout << "Message Info: "
                        << " | user_name: " << user_name
                        << " | msg_text: " << msg_text
                        << " | msg_time: " << msg_time
                        << endl;
                }

                offset += LIMIT; // ���� 15���� ���� ����

                if (offset < totalMessages) {
                    cout << "---------------------- Next 15 messages ----------------------" << endl;
                }
            }
            catch (SQLException& e) {
                cerr << "SQL Error: " << e.what() << endl;
                break;
            }
        }
    }

};