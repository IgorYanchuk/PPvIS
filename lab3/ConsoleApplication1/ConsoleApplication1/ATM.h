#pragma once
#include <string>
#include <vector>
#include <cstdio>

using namespace std;

namespace Igor {

	class ATM {
	public:
		void read_base();
		void include_database(string file);
		ATM() {
			file_name = "database.txt";
			login = "0000111122223333";
		}
		~ATM();
		int check_user(string login, string password);
		int check_balance(string password);
		int inc_balance(string password, int sum);
		int dec_balance(string password, int sum);
		int translate_balance(string password, int sum, string new_log);
		int check_user(string password);
		int check_login(string login);
	protected:
		struct user {
			string login;
			string password;
			int count;
		};

		string file_name;
		vector < user > inf;
		string login;
	};

	class Window1: public ATM {
	public:
		void menue1();
		void go1();
	};
	
	class Window : public Window1{
	public:
		void go();
		void menue1();
	};
}
