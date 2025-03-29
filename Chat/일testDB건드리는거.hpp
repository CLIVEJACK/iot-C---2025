///* 이건 아닌거 같음*/
//
//#pragma once
//#include <iostream>
//#include <string>
//#include <windows.h> // UTF-8 출력을 위한 헤더
//#include "chatDB.hpp"  // MySQLConnector 클래스를 포함하는 헤더
//
//using namespace std;
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
//    // msg_id 개수를 세는 함수
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
//    // 최신 메시지를 15개씩 출력하는 함수
//    void print_Messages_Paginated() {
//        int totalMessages = countMessages(); // msg_id 개수 가져오기
//
//        if (totalMessages == 0) {
//            cout << "No messages found in the database." << endl;
//            return;
//        }
//
//        SetConsoleOutputCP(CP_UTF8); // 한글 출력 지원
//
//        cout << "Total Messages: " << totalMessages << endl;
//
//        int offset = 0; // 처음에는 0부터 시작 (최신 15개부터)
//        while (offset < totalMessages) {
//            try {
//                string query = "SELECT u.user_name, m.msg_text, m.msg_time "
//                    "FROM Message m "
//                    "JOIN User u ON m.user_id = u.user_id "
//                    "ORDER BY m.msg_time DESC " // 최신 메시지부터 정렬
//                    "LIMIT 15 OFFSET " + to_string(offset);
//
//                unique_ptr<Statement> stmt(conn->createStatement());
//                unique_ptr<ResultSet> res(stmt->executeQuery(query));
//
//                if (!res->next()) break; // 더 이상 데이터가 없으면 종료
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
//            offset += 15; // 다음 15개를 가져오기 위해 OFFSET 증가
//
//            cout << "---------------------- Next 15 messages ----------------------" << endl;
//        }
//    }
//};
