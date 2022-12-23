#include <iostream>

using namespace std;

int main() {
	size_t sum = 0;
	string one;
	string two;
	string three;
	while (cin >> one) {
		cin >> two;
		cin >> three;
		string tmp;
		for (auto c: one) {
			if (two.find(c) != string::npos && three.find(c) != string::npos && tmp.find(c) == string::npos) {
				cout << c <<endl;
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