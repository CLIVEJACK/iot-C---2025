/* ��¿��� msg_id�� ���°�*/

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

        try {
            string query = R"(
            SELECT m.msg_id, u.user_name, m.msg_text, m.msg_time 
            FROM Message m 
            JOIN User u ON m.user_id = u.user_id
        )"; // ��� �޽��� �������� (���� ����)

            unique_ptr<Statement> stmt(conn->createStatement());
            unique_ptr<ResultSet> res(stmt->executeQuery(query));

            SetConsoleOutputCP(CP_UTF8); // �ѱ� ��� ����

            // �޽��� �����͸� ������ ����
            vector<string> messages;

            // �����͸� ���Ϳ� ���� (msg_id�� �������� ����)
            while (res->next()) {
                string user_name = res->getString("user_name");
                string msg_text = res->getString("msg_text");
                string msg_time = res->getString("msg_time");

                string fullMessage = " | user_name: " + user_name +
                    " | msg_text: " + msg_text +
                    " | msg_time: " + msg_time;

                messages.push_back(fullMessage);
            }

            // �ֽ� �޽����� ���� ��µǵ��� ���� (���� ������ ������)
            reverse(messages.begin(), messages.end());

            cout << "Total Messages: " << totalMessages << endl;

            // 15���� ���
            int offset = 0;
            while (offset < messages.size()) {
                int limit = min(15, static_cast<int>(messages.size()) - offset); // ���� �޽����� 15�� ������ ���� ����

                for (int i = 0; i < limit; ++i) {
                    cout << "Message Info: " << messages[offset + i] << endl;
                }

                offset += 15; // ���� 15�� ��� �غ�

                if (offset < messages.size()) {
                    cout << "---------------------- Next 15 messages ----------------------" << endl;
                }
            }
        }
        catch (SQLException& e) {
            cerr << "SQL Error: " << e.what() << endl;
        }
    }


};
