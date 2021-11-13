// Вывести числа от 1 до 100 по следующему правилу:
//если число делится на 3, вывести вместо него слово Foo;
//если число делится на 5, вывести вместо него слово Bar;
//если число делится и на 3 и на 5, вывести слово FooBar;
//иначе вывести само число.
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
