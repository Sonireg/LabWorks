#include <iostream>
#include <cmath>
#include <string>
int Checking_input(std::string a, char &b)
{
	bool dot_t = 0, ex_t = 0;
	int myn_t = 0, ex_pos =0;
	if (a[0] == '-')
	{
		b = '-';
	}
	for (int i = 0; i < a.size(); i++)
	{
		if (isdigit(a[i]) || a[i] == '-' || a[i] == '.' || a[i] == 'e' || a[i] == 'E')
		{
			if (a[i] == '.' && dot_t == 0 && ex_t == 0 && a[i+1] != 'e' && a[i+1] != 'E')
			{
				dot_t++;
			}
			else if (a[i] == '.')
			{
				return 0;
			}
			if ((a[i] == 'e' || a[i] == 'E') && ex_t == 0 && ((i != 0) && (i!=1 || a[i-1] != '-')) && (i!= a.size() - 1))
			{
				ex_pos = i;
				ex_t++;
			}
			else  if (a[i] == 'E' || a[i] == 'e')
			{
				return 0;
			}
			if (a[i] == '-' && myn_t < 2 && (i == 0 || a[i-1] == 'e' || a[i-1] == 'E'))
			{
				myn_t++;
			}
			else  if (a[i] == '-')
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	ex_pos++;
	if (a.size() - ex_pos > 3)
	{
		return 0;
	}
	else if (a.size() - ex_pos == 3)
	{
		if (a[ex_pos] - '0' > 3)
		{
			return 0;
		}
		else if (a[ex_pos] - '0' == 3)
		{
			if (a[ex_pos + 1] != '0')
			{
				return 0;
			}
			else 
			{
				if (a[ex_pos + 2] - '0' > 7)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}
int main() {
	std::string a;
	char zn = '+';

	while (1)
	{
		std::cin >> a;
		if (Checking_input(a, zn))
		{
			break;
		}
		std::cout << "Error" << '\n';
	}
	return 0;
}