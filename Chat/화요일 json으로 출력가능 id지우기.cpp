//// print_Message() 함수 변경
//
//json print_MessageJson() {
//    json result_json = json::array(); // JSON 배열 생성
//    int totalMessages = countMessages(); // 총 메시지 개수 가져오기
//
//    if (totalMessages == 0) {
//        cout << "No messages found in the database." << endl;
//        return result_json;
//    }
//
//    try {
//        string query = R"(
//            SELECT m.msg_id, u.user_name, m.msg_text, m.msg_time 
//            FROM Message m 
//            JOIN User u ON m.user_id = u.user_id 
//        )";
//
//        unique_ptr<Statement> stmt(conn->createStatement());
//        unique_ptr<ResultSet> res(stmt->executeQuery(query));
//
//        vector<json> messages;
//
//        while (res->next()) {
//            json msg;
//            msg["msg_id"] = res->getInt("msg_id");  // msg_id 포함 (정렬용)
//            msg["user_name"] = res->getString("user_name");
//            msg["msg_text"] = res->getString("msg_text");
//            msg["msg_time"] = res->getString("msg_time");
//
//            messages.push_back(msg);
//        }
//
//        // 최신 메시지 15개 내림차순 정렬
//        sort(messages.begin(), messages.end(), [](const json& a, const json& b) {
//            return a["msg_id"] > b["msg_id"]; // msg_id 기준 내림차순
//            });
//
//        // 최신 15개 메시지 추가 (msg_id 제외)
//        int firstBatch = min(15, static_cast<int>(messages.size()));
//        for (int i = 0; i < firstBatch; ++i) {
//            json msg = messages[i];
//            msg.erase("msg_id");  // msg_id 제거
//            result_json.push_back(msg);
//        }
//
//        // 남은 메시지 오름차순 정렬
//        if (messages.size() > 15) {
//            sort(messages.begin() + 15, messages.end(), [](const json& a, const json& b) {
//                return a["msg_id"] < b["msg_id"]; // msg_id 기준 오름차순
//                });
//
//            // 남은 메시지 추가 (msg_id 제외)
//            for (size_t i = 15; i < messages.size(); ++i) {
//                json msg = messages[i];
//                msg.erase("msg_id");  // msg_id 제거
//                result_json.push_back(msg);
//            }
//        }
//    }
//    catch (SQLException& e) {
//        cerr << "SQL Error: " << e.what() << endl;
//    }
//
//    return result_json;
//}
