#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));

	char baseStr[20] = "java";
	char inStr[20];
	int key[20];

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
            key[i] = c + 0;
			inStr[i] = key[i];
			printf("%d ", key[i]);
		} else {
            printf("%c ", inStr[i]);
		}
	}
}
