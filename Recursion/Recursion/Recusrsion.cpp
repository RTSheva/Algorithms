#include "Recursion.h"
//Recursion serarch (not quick search)
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