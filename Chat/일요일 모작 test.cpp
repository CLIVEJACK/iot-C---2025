#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include "chatDB.hpp"

using namespace std;

class Message {
private:
	Connection* conn;
public:
	Message(Connection* _conn) : conn(_conn) {
		if (!conn) {
			cout << "Error : Connection Poiner is null" << endl;
		}
	}
	~Message() {}
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
};