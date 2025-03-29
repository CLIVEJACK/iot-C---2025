//#pragma once
//#include <iostream>
//#include <string>
//#include <memory>    // unique_ptr 사용
//#include <algorithm> // sort 함수 사용
//#include <windows.h> // 한글 꺠지는거 방지
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
//// Message 클래스 정의
//class Message {
//private:
//    Connection* conn; // MySQL 연결 객체
//    unique_ptr<MessageData[]> messages; // 동적 배열을 위한 unique_ptr
//    int messageCount = 0; // 전체 메시지 개수
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
//            // 메시지 개수 조회
//            string countQuery = "SELECT COUNT(*) FROM Message";
//            unique_ptr<Statement> stmt(conn->createStatement());
//            unique_ptr<ResultSet> res(stmt->executeQuery(countQuery));
//
//            if (res->next()) {
//                messageCount = res->getInt(1); // 메시지 총 개수 저장
//            }
//
//            if (messageCount > 0) {
//                // 동적 배열 생성
//                messages = make_unique<MessageData[]>(messageCount);
//
//                string dataQuery = R"(
//                    SELECT u.user_name, m.msg_text, m.msg_time
//                    FROM Message m
//                    JOIN User u ON m.user_id = u.user_id
//                )";
//                // 새로운 `res` 선언하여 할당 (중복 실행 방지)
//                unique_ptr<ResultSet> newRes(stmt->executeQuery(dataQuery));
//                res = move(newRes); // 기존 res에 새 ResultSet 이동
//
//                int i = 0;
//                while (res->next() && i < messageCount) {
//                    messages[i].user_name = res->getString("user_name");
//                    messages[i].msg_text = res->getString("msg_text");
//                    messages[i].msg_time = res->getString("msg_time");
//                    i++;
//                }
//
//                // 최신 메시지가 먼저 오도록 정렬 (msg_time 기준 내림차순)
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
//    // 15개씩 출력하는 함수
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
//            int limit = min(15, messageCount - offset); // 남은 메시지 개수 고려
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
//            if (offset < messageCount) {
//                cout << "---------------------- Next 15 messages ----------------------" << endl;
//            }
//        }
//    }
//};
