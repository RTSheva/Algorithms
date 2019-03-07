#include "Recursion.h"
void search(int tab[], int left, int right, int x)
{
	if (left > right)
		std::cout << "Cant find element " << x << std::endl;
	else
		if (tab[left] == x)
			std::cout << "Elemet " << x << " is found!" << std::endl;
		else
			search(tab, left + 1, right, x);
}

unsigned long int factorial(int x)
{
	if (x == 0)
		return 1;
	else 
		return x*factorial(x-1);
}

unsigned long int factorial(int x, int temp)
{
	if (x == 0)
		return temp;
	else
		return factorial(x-1,x*temp);
}

unsigned long int fib(int x)
{
	if (x < 2)
		return x;
	else
		return fib(x - 1) + fib(x - 2);
}

unsigned long int McCarthy(int n, int &j)
{
	
	j++;
	if (n > 100)
		return (n - 10);
	else
		return McCarthy(McCarthy(n + 11, j), j);
}

void Reverse(int A[], int left, int right)
{
	if (left < right)
	{
		int temp = A[left];
		A[left] = A[right];
		A[right] = temp;
		Reverse(A, left + 1, right - 1);
	}
}

int binary_search(int A[], int left, int right,int x)
{
	if (left > right)
		return -1;
	else
	{
		int middle = (left + right) / 2;
		if (x == A[middle])
			return x;
		else
			if (x < A[middle])
				return binary_search(A, left, middle-1, x);
			else
				return binary_search(A, middle+1, right, x);
	}
}

void binary_convertor(int x)
{
	if (x != 0){
		binary_convertor(x / 2);
		std::cout << x % 2;
	}
}

int binary_convertor(int x, int res=0, int pos=0)
{
	if (x > 0)
		binary_convertor(x / 2, res + ((x % 2)*pow(10.0, pos)), pos + 1);
	else
		return res;
}

int GCD(int a, int b)
{
	if (!b)
		return a;
	else
		return GCD(b, a%b);
}

unsigned long int Lfactorial(int x)
{
	int res=1;
	for (int i = 2; i <= x; ++i)
	{
		res *= i;
	}
	return res;
}
