#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main() {
	list<uint64_t> elves;
	elves.push_back(0);
	string line;
	while (getline(cin, line)) {
		if (line.empty()) {
			elves.push_back(0);
		}
		else {
			uint64_t n = atoll(line.c_str());
			elves.back() += n;
		}
	}
	size_t top = 0;
	for (int i = 0; i < 3; i++) {
		auto result = max_element(elves.begin(), elves.end());
		top += *result;
		elves.erase(result);
	}
	cout << top << endl;
	return 0;
}