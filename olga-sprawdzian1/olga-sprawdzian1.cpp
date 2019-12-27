#include <iostream>
#include <vector>

/*Sprawdzian 1*/
//napisz funkcję power() obliczającą potęgę o wykładniku naturalnym(z zerem) dowolnej liczby całkowitej
//funkcja musi być rekursywna

int power(int b, unsigned int p)
{
	return INT32_MIN;
}

int main()
{
	if (true)
	{
		int base = 0;
		unsigned int exponent = 0;

		std::cout << "Podaj podstawe potegi: \n";
		std::cin >> base;

		std::cout << "Podaj wykladnik potegi: \n";
		std::cin >> exponent;

		std::cout << "\n";
		std::cout << power(base, exponent);
		std::cout << "\n";
	}
	else
	{
		std::vector<std::pair<std::pair<int, unsigned int>, int>> autotest;

		autotest.push_back(std::pair<std::pair<int, unsigned int>, int>(std::pair<std::pair<unsigned int, int>, int>(std::pair<unsigned int, int>(2, 2), 4)));
		autotest.push_back(std::pair<std::pair<int, unsigned int>, int>(std::pair<std::pair<unsigned int, int>, int>(std::pair<unsigned int, int>(0, 1), 0)));
		autotest.push_back(std::pair<std::pair<int, unsigned int>, int>(std::pair<std::pair<unsigned int, int>, int>(std::pair<unsigned int, int>(3, 3), 27)));
		autotest.push_back(std::pair<std::pair<int, unsigned int>, int>(std::pair<std::pair<unsigned int, int>, int>(std::pair<unsigned int, int>(4, 6), 4096)));
		autotest.push_back(std::pair<std::pair<int, unsigned int>, int>(std::pair<std::pair<unsigned int, int>, int>(std::pair<unsigned int, int>(2, 10), 1024)));
		autotest.push_back(std::pair<std::pair<int, unsigned int>, int>(std::pair<std::pair<unsigned int, int>, int>(std::pair<unsigned int, int>(5, 0), 1)));
		autotest.push_back(std::pair<std::pair<int, unsigned int>, int>(std::pair<std::pair<unsigned int, int>, int>(std::pair<unsigned int, int>(-2, 2), 4)));
		autotest.push_back(std::pair<std::pair<int, unsigned int>, int>(std::pair<std::pair<unsigned int, int>, int>(std::pair<unsigned int, int>(-2, 3), -8)));
		autotest.push_back(std::pair<std::pair<int, unsigned int>, int>(std::pair<std::pair<unsigned int, int>, int>(std::pair<unsigned int, int>(16, 2), 256)));
		autotest.push_back(std::pair<std::pair<int, unsigned int>, int>(std::pair<std::pair<unsigned int, int>, int>(std::pair<unsigned int, int>(-15, 5), -759375)));
		
		int pts = 0;
		for (int i = 0; i < autotest.size(); i++)
		{
			std::cout << "Test " << i + 1 << ": " << (autotest[i].first.first) << "^" << (autotest[i].first.second) << " powinno dac wynik: " << (autotest[i].second)
				<< "\nOtrzymany wynik: " << (power(autotest[i].first.first, autotest[i].first.second))
				<< "\nOcena: " << ((power(autotest[i].first.first, autotest[i].first.second) == autotest[i].second) ? "Zaliczony" : "Niezaliczony") << "\n\n";

			if (power(autotest[i].first.first, autotest[i].first.second) == autotest[i].second)
			{
				pts++;
			}
		}

		std::cout << "Zdobyte punkty: " << pts << " na " << autotest.size() << '\n';
	}
}