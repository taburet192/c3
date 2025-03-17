#include "iostream"



bool isprime(int p)
{
	bool c=1;
	int i=2;
	
	while (i < p)
	{
		if (p % i == 0)
		{
			std::cout << i << "\n";
			c = 0;
			p = p / i;
		}
		else {
			i++;
		}
	}
	std::cout << i << "\n";
	return c;





}

int main()
{
	int p;
	std::cin >> p;
	
	if (isprime(p) == 0)
	{
		std::cout << "p is not prime";
	}
	else
	{
		std::cout << "p is prime";
	}

	return 0;
}