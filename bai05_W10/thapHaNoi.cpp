#include "thapHaNoi.h"


void thapHaNoi(int n, char source, char destination, char mid) 
{

	if (n == 1) {
		cout << "di chuyen dia thu " << n << " tu " << source << " sang " << destination << endl;
		return;
	}
	thapHaNoi(n - 1, source, mid, destination);

	cout << "di chuyen dia thu " << n << " tu " << source << " sang " << destination << std::endl;

	thapHaNoi(n - 1, mid, destination, source);
}