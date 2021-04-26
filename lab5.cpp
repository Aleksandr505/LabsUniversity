#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main() {
	char baseStr[20] = "java";
	char inStr[20];

	cout << "Please, input string\n" << endl;
	gets(inStr);

	for (int i = 0; inStr[i] != '\0'; i++) {
		char c = inStr[i];
		bool isComp = false;
		for (int j = 0; baseStr[j] != '\0'; j++) {
			if (c == baseStr[j]) {
				isComp = true;
				break;
			}
		}

		if (!isComp) {
			inStr[i] += 26;
		}
	}

	cout << inStr << endl;
}
