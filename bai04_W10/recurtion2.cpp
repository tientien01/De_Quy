#include "recurtion2.h"

// dem so chu so cua n
int countN(int n) {
	if (n < 10) return 1;
	return 1 + countN(n / 10);
}
// tinh tong cua cac chu so n
int sumCountN(int n)
{
	if (n < 10) return n;
	return n%10 + sumCountN(n / 10);
}

// tinh tich cac chu so le
int mulCountOddN(int n)
{
	if (n == 0) return 1; 
	int digit = n % 10;
	if (digit % 2 == 0) {
		return mulCountOddN(n / 10); 
	}
	else {
		return digit * mulCountOddN(n / 10); 
	}
}

bool isAllOddOrEven(int n) {

	if (n < 10) return true;

	int lastDigit = n % 10;
	int nextDigit = (n / 10) % 10;

	if ((lastDigit % 2) != (nextDigit % 2)) return false;

	return isAllOddOrEven(n / 10);
}

bool isALlOdd(int n) {
	
	if (n % 2 == 0) return false;
	isAllOddOrEven(n);
}
void menu()
{
	cout << "dem so chu so cua n = 123456: " << countN(123456) << endl;
	cout << "tong cua so chu so cua n = 123456: " << sumCountN(123456) << endl;
	cout << "tich cua so chu so le cua n = 123456: " << mulCountOddN(123456) << endl;
	cout << "ktr toan chan or toan le cua 12468: " << isAllOddOrEven(12468) << endl;
	cout << "ktr toan le cua 13579: " << isAllOddOrEven(13579) << endl;

	
}