#include "recursion.h"

int Yn(int n);
int Xn(int n);

// tinh S(n) =  1 + 2 + ... + n;
int calc0(int n) {
	if (n == 1) return 1;
	
	return n + calc0(n - 1);
}

// tinh S(n) =  1 + 1/2 + ... + 1/n;
double calc1(int n)
{
	if (n == 1) return 1;

	return 1 / n + calc1(n - 1);
	
}


// tính n!
long long calc2(int n)
{
	if (n == 1) return 1;

	return n * calc2(n - 1);
}


// tinh S(n) = x^2 + ... + x^2n
long long calc3(int n,int x)
{
	if (n == 1) return x*x;
	
	return pow(x, 2 * n) + calc3(n - 1,2);
}

// tinh S(n) = x^n;
long long calc4(int n, int x)
{
	if (n == 1) return x;
	return pow(x, n) + calc4(n - 1, x);
}

// fibo
int fibo(int n) {
	//if (n == 0 || n == 1) return 1;
	if (n == 0) return 0;
	if (n == 1) return 1;
	return	fibo(n - 1) + fibo(n - 2);
}

//Tinh Xn va Yn thong qua nhau
int Yn(int n)
{
	if (n == 0) return 0;
	
	return 3 * Xn(n - 1) + 2 * Yn(n - 1);
}

int Xn(int n)
{
	if (n == 0) return 1;
	
	return Xn(n - 1) + Yn(n - 1);
}

//tinh Ckn
int C(int k, int n)
{
	if (k == 0 || k == n) return 1;
	if (k == 1) return n;
	return C(k - 1, n - 1) + C(k, n - 1);
}
void menu()
{
	
	cout << "calc0(10): " << calc0(10) << endl;
	cout << "calc1(3): " << calc1(3) << endl;
	cout << "calc2(5): " << calc2(5) << endl;
	cout << "calc3(5): " << calc3(5,2) << endl;
	cout << "calc4(5): " << calc4(5, 2) << endl;
	cout << "fibo(10): " << fibo(10) << endl;
	cout << "Xn(10): " << Xn(10) << endl;
	cout << "Yn(10): " << Yn(10) << endl;
	cout << "C(2,10) " << C(2,10) << endl;





}
