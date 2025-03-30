#pragma once
#include <iostream>
#include <string>
#include <windows.h> // 한글깨짐 방지
#include "chatDB.hpp"  // MySQLConnector 클래스를 포함하는 헤더

using namespace std;

class Message {
private:
    Connection* conn; // MySQL 연결 객체

public:
    Message(Connection* _conn) : conn(_conn) {
        if (!conn) {
            cerr << "Error: Connection pointer is null!" << endl;
        }
    }
    ~Message() {}
    /* 그냥 15개 위에서부터 출력하는거 */
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

    //        SetConsoleOutputCP(CP_UTF8); // 한글 출력 지원

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
    //msg_id 개수를 세는 함수 추가
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
    //여가 15개 출력하는거 

    void print_Message() {
        int totalMessages = countMessages(); // 총 메시지 개수 가져오기

        if (totalMessages == 0) {
            cout << "No messages found in the database." << endl;
            return;
        }

        try {
            string query = R"(
            SELECT m.msg_id, u.user_name, m.msg_text, m.msg_time 
            FROM Message m 
            JOIN User u ON m.user_id = u.user_id
        )";

            unique_ptr<Statement> stmt(conn->createStatement());
            unique_ptr<ResultSet> res(stmt->executeQuery(query));

            SetConsoleOutputCP(CP_UTF8);

            // msg_id와 메시지 데이터를 저장할 벡터
            vector<pair<int, string>> messages;     //벡터(messages)에 msg_id와 메시지 데이터를 저장
                                                    //pair<int, string>을 사용하여 msg_id와 메시지 내용을 함께 저장
            // 데이터를 벡터에 저장
            while (res->next()) {
                int msg_id = res->getInt("msg_id");
                string user_name = res->getString("user_name");
                string msg_text = res->getString("msg_text");
                string msg_time = res->getString("msg_time");

                string fullMessage = " | user_name: " + user_name +
                                     " | msg_text: " + msg_text +
                                     " | msg_time: " + msg_time;

                messages.emplace_back(msg_id, fullMessage);
            }

            // msg_id 기준 내림차순 정렬 (최신 메시지 먼저)
            sort(messages.begin(), messages.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
                return a.first > b.first; // msg_id가 큰 순서대로 정렬
                });

            cout << "Total Messages: " << totalMessages << endl;        // msg_id 갯수 출력

            // 15개씩 출력
            int offset = 0;
            while (offset < messages.size()) {
                int limit = min(15, static_cast<int>(messages.size()) - offset); // 남은 메시지 

                for (int i = 0; i < limit; ++i) {
                    cout << "Message Info: msg_id: " << messages[offset + i].first << messages[offset + i].second << endl;
                }

                offset += 15; // 다음 15개 출력 준비

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
