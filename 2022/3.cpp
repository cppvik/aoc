#include <iostream>

using namespace std;

int main() {
	size_t sum = 0;
	string backpack;
	while (cin >> backpack) {
		string one = backpack.substr(0, backpack.size()/2);
		string two = backpack.substr(backpack.size()/2, backpack.size()/2);
		string tmp;
		for (auto c: one) {
			if (two.find(c) != string::npos && tmp.find(c) == string::npos) {
				cout << c << endl;
				tmp += c;
				if (islower(c))
					sum += c - '`';
				else
					sum += c - '@' + 26;
			}
		}
	}
	cout << sum << endl;
	return 0;
}