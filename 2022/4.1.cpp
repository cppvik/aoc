#include <iostream>
#include <sstream>

using namespace std;

int main() {
	string str;
	size_t overlaps = 0;

	while (cin >> str) {
		// std::string str = ":12341+414112=absca";
		std::stringstream ss(str);
		size_t s1, e1, s2, e2;
		char dash1, dash2, comma;
		std::string var;
		ss >> s1 >> dash1 >> e1 >> comma >> s2 >> dash2 >> e2;
		if ((s1 <= s2 && s2 <= e1) || (s1 <= e2 && e2 <= e1) || (s2 <= s1 && s1 <= e2))
			overlaps++;
	}
	cout << overlaps << endl;
	return 0;
}