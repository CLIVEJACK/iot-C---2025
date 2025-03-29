//#pragma once
//#include <iostream>
//#include <string>
//#include <vector>  // ���� ���
//#include <algorithm> // ���Ŀ�
//#include <windows.h> // UTF-8 ����� ���� ���
//#include "chatDB.hpp"  // MySQLConnector Ŭ������ �����ϴ� ���
//
//using namespace std;
//
//// �޽����� ������ ����ü
//struct MessageData {
//    string user_name;
//    string msg_text;
//    string msg_time;
//};
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
//    // ��� �޽����� ������ ���Ϳ� ����
//    vector<MessageData> fetchAllMessages() {
//        vector<MessageData> messages;
//        try {
//            string query = R"(
//                SELECT u.user_name, m.msg_text, m.msg_time
//                FROM Message m
//                JOIN User u ON m.user_id = u.user_id
//            )";
//            unique_ptr<Statement> stmt(conn->createStatement());
//            unique_ptr<ResultSet> res(stmt->executeQuery(query));
//
//            while (res->next()) {
//                MessageData msg;
//                msg.user_name = res->getString("user_name");
//                msg.msg_text = res->getString("msg_text");
//                msg.msg_time = res->getString("msg_time");
//
//                messages.push_back(msg);
//            }
//        }
//        catch (SQLException& e) {
//            cerr << "SQL Error: " << e.what() << endl;
//        }
//        return messages;
//    }
//
//    // �ֽ� �޽������� 15���� ���
//    void printMessagesPaginated() {
//        vector<MessageData> messages = fetchAllMessages(); // ��� �޽��� ��������
//
//        if (messages.empty()) {
//            cout << "No messages found in the database." << endl;
//            return;
//        }
//
//        // �ֽ� �޽����� ���� ��µǵ��� ���� (msg_time ����, �������� ����)
//        sort(messages.begin(), messages.end(), [](const MessageData& a, const MessageData& b) {
//            return a.msg_time > b.msg_time; // �������� ���� (�ֽ� �޽����� ����)
//            });
//
//        SetConsoleOutputCP(CP_UTF8); // �ѱ� ��� ����
//        cout << "Total Messages: " << messages.size() << endl;
//
//        int offset = 0; // ó������ ����
//        while (offset < messages.size()) {
//            int limit = min(15, static_cast<int>(messages.size()) - offset); // ���� �޽����� 15�� ������ �� ����
//
//            for (int i = 0; i < limit; ++i) {
//                const MessageData& msg = messages[offset + i];
//                cout << u8"Message Info: "
//                    << " | user_name: " << msg.user_name
//                    << " | msg_text: " << msg.msg_text
//                    << " | msg_time: " << msg.msg_time
//                    << endl;
//            }
//
//            offset += 15; // ���� 15�� ��� �غ�
//
//            if (offset < messages.size()) {
//                cout << "---------------------- Next 15 messages ----------------------" << endl;
//            }
//        }
//    }
//};
