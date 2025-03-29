///* �̰� �ƴѰ� ����*/
//
//#pragma once
//#include <iostream>
//#include <string>
//#include <windows.h> // UTF-8 ����� ���� ���
//#include "chatDB.hpp"  // MySQLConnector Ŭ������ �����ϴ� ���
//
//using namespace std;
//
//class Message {
//private:
//    Connection* conn; // MySQL ���� ��ü
//
//public:
//    Message(Connection* _conn) : conn(_conn) {
//        if (!conn) {
//            cerr << "Error: Connection pointer is null!" << endl;
//        }
//    }
//    ~Message() {}
//
//    // msg_id ������ ���� �Լ�
//    int countMessages() {
//        int count = 0;
//        try {
//            string query = "SELECT COUNT(msg_id) AS total FROM Message";
//            unique_ptr<Statement> stmt(conn->createStatement());
//            unique_ptr<ResultSet> res(stmt->executeQuery(query));
//
//            if (res->next()) {
//                count = res->getInt("total");
//            }
//        }
//        catch (SQLException& e) {
//            cerr << "SQL Error: " << e.what() << endl;
//        }
//        return count;
//    }
//
//    // �ֽ� �޽����� 15���� ����ϴ� �Լ�
//    void print_Messages_Paginated() {
//        int totalMessages = countMessages(); // msg_id ���� ��������
//
//        if (totalMessages == 0) {
//            cout << "No messages found in the database." << endl;
//            return;
//        }
//
//        SetConsoleOutputCP(CP_UTF8); // �ѱ� ��� ����
//
//        cout << "Total Messages: " << totalMessages << endl;
//
//        int offset = 0; // ó������ 0���� ���� (�ֽ� 15������)
//        while (offset < totalMessages) {
//            try {
//                string query = "SELECT u.user_name, m.msg_text, m.msg_time "
//                    "FROM Message m "
//                    "JOIN User u ON m.user_id = u.user_id "
//                    "ORDER BY m.msg_time DESC " // �ֽ� �޽������� ����
//                    "LIMIT 15 OFFSET " + to_string(offset);
//
//                unique_ptr<Statement> stmt(conn->createStatement());
//                unique_ptr<ResultSet> res(stmt->executeQuery(query));
//
//                if (!res->next()) break; // �� �̻� �����Ͱ� ������ ����
//
//                do {
//                    string user_name = res->getString("user_name");
//                    string msg_text = res->getString("msg_text");
//                    string msg_time = res->getString("msg_time");
//
//                    cout << u8"Message Info: "
//                        << " | user_name: " << user_name
//                        << " | msg_text: " << msg_text
//                        << " | msg_time: " << msg_time
//                        << endl;
//                } while (res->next());
//
//            }
//            catch (SQLException& e) {
//                cerr << "SQL Error: " << e.what() << endl;
//            }
//
//            offset += 15; // ���� 15���� �������� ���� OFFSET ����
//
//            cout << "---------------------- Next 15 messages ----------------------" << endl;
//        }
//    }
//};
