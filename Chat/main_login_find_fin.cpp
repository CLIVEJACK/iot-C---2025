//// chat-admin > main.cpp 에 있음 
//// 이런 느낌으로 만들어서 넣으면 됨
//
//Select_delete user_select(db.getConnection());                          // 개인 조회 GET 요청 처리
//                                                                        // POST 요청을 위한 엔드포인트 설정
//svr.Post("/chat/admin/user_select", [&](const httplib::Request& req, httplib::Response& res) {
//    user_select.handle_user_select(req, res);
//    });