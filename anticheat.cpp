#include <iostream>
#include <random>

using namespace std;

class AntiCheat {
public:
	void IsCheat(string username) {
		std::random_device rd;
		std::mt19937 rng(rd());
		std::uniform_int_distribution<int> uni(0, 13512);
		auto random_integer = uni(rng);
		if (random_integer == 1) {
			Ban(username, "cheats");
		}
		else {
			cout << "User not cheater" << endl;
		}
	};
private:
	void Ban(string user, string reason) {
		bool BanStatus;
		BanStatus = true;
		string success = "Success!";
		cout << "User " << user << " was banned for " << reason << endl;
	};
};

int main() {
	string un;
	cout << "Enter username:" << endl;
	cin >> un;
	AntiCheat AC;
	AC.IsCheat(un);
	system("PAUSE");
}