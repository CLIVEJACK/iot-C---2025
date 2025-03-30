//#pragma once
//#include <iostream>
//#include <string>
//#include <Windows.h>
//#include "chatDB.hpp"
//
//using namespace std;
//
//class Message {
//private:
//	Connection* conn;
//public:
//	Message(Connection* _conn) : conn(_conn) {
//		if (!conn) {
//			cout << "Error : Connection Poiner is null" << endl;
//		}
//	}
//	~Message() {}
//
//	int countMessages() {
//		int count = 0;
//		try {
//			string query = "SELECT COUNT(msg_id) AS total FROM Message";
//			unique_ptr<Statement> stmt(conn->createStatement());
//			unique_ptr<ResultSet> res(stmt->executeQuery(query));
//
//			if (res->next()) {
//				count = res->getInt("total");
//			}
//		}
//		catch (SQLException& e) {
//			cerr << "SQL Error: " << e.what() << endl;
//		}
//		return count;
//	}
//
//	void print_Message() {
//		int totalMessages = countMessages(); // 총 메시지 개수 가져오기
//
//		if (totalMessages == 0) {
//			cout << "No messages found in the database." << endl;
//			return;
//		}
//
//		try {
//			string query = R"(
//            SELECT m.msg_id, u.user_name, m.msg_text, m.msg_time 
//            FROM Message m 
//            JOIN User u ON m.user_id = u.user_id
//        )";
//
//			unique_ptr<Statement> stmt(conn->createStatement());
//			unique_ptr<ResultSet> res(stmt->executeQuery(query));
//
//			SetConsoleOutputCP(CP_UTF8);
//
//			vector<pair<int, string>> messages;
//		}
//
//};