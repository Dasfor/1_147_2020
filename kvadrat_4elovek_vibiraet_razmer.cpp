#include <iostream>

using namespace std;

int main()
{
	int g;
	int n;


	std::cout << "vvedi ueloe 4islo x" << endl;
	cin >> n;



	std::cout << "vvedi ueloe 4islo y" << endl;
	cin >> g;

	for (int y = 0; y < g; y++)
	{
		for (int x = 0; x < n; x++)
		{
			std::cout << "$$";
		}
		std::cout << std::endl;
	}
}
