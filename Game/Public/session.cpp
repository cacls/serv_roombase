#ifdef _MSC_VER#include "stdafx.h"#endif#include "session.h"using namespace PubliccSession::cSession(){	hall_id 	= 0;	key 		= 0;	login_at 	= 0;	login_out	= 0;}void cSession::Key(byte_8 k){	key=k;}byte_8cSession::Key(){	return key;}byte_1 cSession::HallId(){	return hall_id;}void   cSession::HallId(byte_1 hid){	hall_id = hid;}byte_8 cSession::LoginAt(){	return login_at;}void   cSession::LoginAt(byte_8 lg_at){	login_at = lg_at;}byte_8cSession::LoginOut(){	return login_out;}void   cSession::LoginOut(byte_8 lg_out){	login_out = lg_out;}cSessionGenerator::cSessionGenerator(){	serial_no = 0;}cSession cSessionGenerator::Genarate(byte_1 server_id){	cSession session;	serial_no++;	session.hall_id = server_id;	session.key = serial_no;}