#include "palindrome.h"

int main() {

	char s[] = "1234";
	if (isPalindrome(0, strlen(s)-1, s) ){
		cout << "yes\n";
	}
	else cout << "no\n";
	system("pause");
	return 0;
}