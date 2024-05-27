#include "palindrome.h"

// tim xau doi xung qua de quy
bool isPalindrome(int l, int r, char* s)
{
	if (l >= r) {
		return true;
	}

	if (s[l] != s[r]) {
		return false;
	}

	return isPalindrome(l + 1, r - 1, s);
}

