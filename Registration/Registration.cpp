// Registration.cpp : Defines the entry point for the application.
//

#include "Registration.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Reg {
public:
	void NewUser(string&);
	void ForgotPassword(string&, string&);
};

void Reg::NewUser(vector<string, string>& NewUser) {

}
int main()
{
	string account, password;
	vector<pair<string, string>> info;

	Reg reg;

	reg.NewUser(info);
	cin >> account;
	cin >> password;
	info.push_back({account, password});

	cout << "Username: " << info[0].first << endl << "Password: " << info[0].second << endl;

	//cin >> info[0].first;

	//info.push_back(make_pair(info[info.size()].first,info[info.size()].second));

	cout << info.size() << endl;


	return 0;
}