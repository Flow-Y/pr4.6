#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	double Sum, Product;
	int n, i, k;
	Sum = 0;
	n = 1;
	i = 1;
	while (n <= 10)

	{
		Product = 1;
		k = 1;
		while (k <= i)
		{
			Product *= k/i;
			k++;
		}
		Sum+= (1 + Product)/(i * i);

		n++;
	}
	cout << Sum << endl;
	Sum = 0;
	i = 1;
	do
	{
		Product = 1;
		k = 1;
		do
		{
			Product *= k / i;
			k++;
		} 
		while (k <= i);
		Sum += (1 + Product) / (i * i);
		i++;
	} 
	while (i <= 10);
	cout << Sum << endl;

	Sum = 0;
	for (i = 1; i <= 10; i++)

	{
		Product = 1;
		for (k = 1; k <= i; k++)

		{
			Product *= k/i;

		}
		Sum += (1 + Product) / (i * i);

	}
	cout << Sum << endl;

	Sum = 0;
	for (i = 10; i >= 1; i--)
	{
		Product = 1;
		k = 1;
		for (k = i; k >= 1; k--)

		{
			Product *= k/i;
		}
		Sum += (1 + Product) / (i * i);
	}
	cout << Sum << endl;
	return 0;
}