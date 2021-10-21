#include <iostream>

int main() {
	int nums = 1;
	while (nums <= 100)
	{
		if ((nums % 3 == 0) and (nums % 5 != 0))
		{
			std::cout << "Foo" << std::endl;
		}
		if ((nums % 5 == 0) and (nums % 3 != 0))
		{
			std::cout << "Bar" << std::endl;
		}
		if ((nums % 5 == 0) and (nums % 3 == 0))
		{
			std::cout << "FooBar" << std::endl;
		}
		if ((nums % 5 != 0) and (nums % 3 != 0))
		{
			std::cout << nums << std::endl;
		}
		++nums;
	}
}