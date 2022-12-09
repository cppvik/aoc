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
		case 'X': // lose
			switch(first) {
			case 'A':
				score += 3;
				break;
			case 'B':
				score += 1;
				break;
			case 'C':
				score += 2;
				break;
			}
			break;
		case 'Y': // draw
			score +=3;
			switch(first) {
			case 'B':
				score += 2;
				break;
			case 'C':
				score += 3;
				break;
			case 'A':
				score += 1;
				break;
			}
			break;
		case 'Z': // win
			score += 6;
			switch(first) {
			case 'C':
				score += 1;
				break;
			case 'A':
				score += 2;
				break;
			case 'B':
				score += 3;
				break;
			}
			break;
		}
	}
	cout << score << endl;;
	return 0;
}