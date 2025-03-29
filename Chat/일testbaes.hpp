//#pragma once
//#include <iostream>
//#include <string>
//#include <vector>  // 벡터 사용
//#include <algorithm> // 정렬용
//#include <windows.h> // UTF-8 출력을 위한 헤더
//#include "chatDB.hpp"  // MySQLConnector 클래스를 포함하는 헤더
//
//using namespace std;
//
//// 메시지를 저장할 구조체
//struct MessageData {
//    string user_name;
//    string msg_text;
//    string msg_time;
//};
//
//class Message {
//private:
//    Connection* conn; // MySQL 연결 객체
//
//public:
//    Message(Connection* _conn) : conn(_conn) {
//        if (!conn) {
//            cerr << "Error: Connection pointer is null!" << endl;
//        }
//    }
//    ~Message() {}
//
//    // 모든 메시지를 가져와 벡터에 저장
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
//    // 최신 메시지부터 15개씩 출력
//    void printMessagesPaginated() {
//        vector<MessageData> messages = fetchAllMessages(); // 모든 메시지 가져오기
//
//        if (messages.empty()) {
//            cout << "No messages found in the database." << endl;
//            return;
//        }
//
//        // 최신 메시지가 먼저 출력되도록 정렬 (msg_time 기준, 내림차순 정렬)
//        sort(messages.begin(), messages.end(), [](const MessageData& a, const MessageData& b) {
//            return a.msg_time > b.msg_time; // 내림차순 정렬 (최신 메시지가 먼저)
//            });
//
//        SetConsoleOutputCP(CP_UTF8); // 한글 출력 지원
//        cout << "Total Messages: " << messages.size() << endl;
//
//        int offset = 0; // 처음부터 시작
//        while (offset < messages.size()) {
//            int limit = min(15, static_cast<int>(messages.size()) - offset); // 남은 메시지가 15개 이하일 수 있음
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
//            offset += 15; // 다음 15개 출력 준비
//
//            if (offset < messages.size()) {
//                cout << "---------------------- Next 15 messages ----------------------" << endl;
//            }
//        }
//    }
//};
