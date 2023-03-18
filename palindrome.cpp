#include <string>
#include<iostream>

using namespace std;

bool isPalindrome(string str) {
	// racecar
	for (int i = 0, j = str.size() - 1; i < str.size() / 2 && j > str.size()/ 2; i++, j--) {
		if (str[i] != str[j])
			return false;
	}
	return true;

}

int main() {
	cout << isPalindrome("aacgcae");
	return 0;
}