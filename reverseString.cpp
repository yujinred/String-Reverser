#include <vector>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

class StringReverser {
	string original;
	vector<string> newString;

	void reverseIt();
public:
	StringReverser(string);
	void printReversedString();
};								

StringReverser::StringReverser(string input) {
	original = input;
	reverseIt();
}

void StringReverser::reverseIt() {
	string token;
	istringstream buffer(original);
	while (getline(buffer, token, ' ')) {
		newString.push_back(token);
	}
}

void StringReverser::printReversedString() {
	int size = newString.size();
	for (int i = 0; i < size; ++i) {
		cout << newString[size - i - 1];
		if (i == size - 1) {
			cout << endl;
		} else {
			cout << " ";
		}
	}
}

int main() {
	string input;
	getline(cin, input);
	StringReverser sr(input);
	sr.printReversedString();
	return 0;
}