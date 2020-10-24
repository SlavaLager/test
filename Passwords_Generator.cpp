#include <iostream>
#include<string>
#include<math.h>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));
	while (true) {
		cout << "Write 'password' to get random password, or write 'exit' to exit\n";
		string s;
		cin >> s;
		if (s == "password") {
			char password[9];
			for (int i = 0; i < 8; i++)password[i] = rand() % 128;
			password[8] = '\0';
			cout << "New password: " << password << " . Don't forget this passord." << endl;
		}
		else if (s == "exit")return 0;
	}
}