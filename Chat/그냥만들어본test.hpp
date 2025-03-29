//#pragma once
//#include <iostream>
//#include <string>
//#include <memory>    // unique_ptr ���
//#include <algorithm> // sort �Լ� ���
//#include <windows.h> // �ѱ� �����°� ����
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
//// Message Ŭ���� ����
//class Message {
//private:
//    Connection* conn; // MySQL ���� ��ü
//    unique_ptr<MessageData[]> messages; // ���� �迭�� ���� unique_ptr
//    int messageCount = 0; // ��ü �޽��� ����
//
//public:
//    Message(Connection* _conn) : conn(_conn) {
//        if (!conn) {
//            cerr << "Error: Connection pointer is null!" << endl;
//        }
//    }
//    ~Message() {}
//
//    void fetchAllMessages() {
//        try {
//            // �޽��� ���� ��ȸ
//            string countQuery = "SELECT COUNT(*) FROM Message";
//            unique_ptr<Statement> stmt(conn->createStatement());
//            unique_ptr<ResultSet> res(stmt->executeQuery(countQuery));
//
//            if (res->next()) {
//                messageCount = res->getInt(1); // �޽��� �� ���� ����
//            }
//
//            if (messageCount > 0) {
//                // ���� �迭 ����
//                messages = make_unique<MessageData[]>(messageCount);
//
//                string dataQuery = R"(
//                    SELECT u.user_name, m.msg_text, m.msg_time
//                    FROM Message m
//                    JOIN User u ON m.user_id = u.user_id
//                )";
//                // ���ο� `res` �����Ͽ� �Ҵ� (�ߺ� ���� ����)
//                unique_ptr<ResultSet> newRes(stmt->executeQuery(dataQuery));
//                res = move(newRes); // ���� res�� �� ResultSet �̵�
//
//                int i = 0;
//                while (res->next() && i < messageCount) {
//                    messages[i].user_name = res->getString("user_name");
//                    messages[i].msg_text = res->getString("msg_text");
//                    messages[i].msg_time = res->getString("msg_time");
//                    i++;
//                }
//
//                // �ֽ� �޽����� ���� ������ ���� (msg_time ���� ��������)
//                sort(messages.get(), messages.get() + messageCount, [](const MessageData& a, const MessageData& b) {
//                    return a.msg_time > b.msg_time;
//                    });
//            }
//        }
//        catch (SQLException& e) {
//            cerr << "SQL Error: " << e.what() << endl;
//        }
//    }
//
//    // 15���� ����ϴ� �Լ�
//    void printMessagesPaginated() {
//        if (messageCount == 0) {
//            cout << "No messages found in the database." << endl;
//            return;
//        }
//        SetConsoleOutputCP(CP_UTF8);
//        cout << "Total Messages: " << messageCount << endl;
//
//        int offset = 0;
//        while (offset < messageCount) {
//            int limit = min(15, messageCount - offset); // ���� �޽��� ���� ���
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
//            if (offset < messageCount) {
//                cout << "---------------------- Next 15 messages ----------------------" << endl;
//            }
//        }
//    }
//};
