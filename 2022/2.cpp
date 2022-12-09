#include <iostream>
#include <map>

using namespace std;

int main() {
	const map<char, string> elf = {{'A' , "Rock"}, {'B' , "Paper"}, { 'C', "Scissors"}};
	const map<char, string> me = {{'X' , "Rock"}, {'Y' , "Paper"}, { 'Z', "Scissors"}};
	size_t score = 0;
	char first, second;
	while (cin >> first >> second) {
		switch (second) {
		case 'X':
			score +=1;
			switch(first) {
			case 'A':
				score += 3;
				break;
			case 'B':
				break;
			case 'C':
				score += 6;
				break;
			}
			break;
		case 'Y':
			score +=2;
			switch(first) {
			case 'B':
				score += 3;
				break;
			case 'C':
				break;
			case 'A':
				score += 6;
				break;
			}
			break;
		case 'Z':
			score +=3;
			switch(first) {
			case 'C':
				score += 3;
				break;
			case 'A':
				break;
			case 'B':
				score += 6;
				break;
			}
			break;
		}
	}
	cout << score << endl;;
	return 0;
}