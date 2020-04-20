#include <iostream>

void increment (int* a) {
	*a = *a + 1;
	// std::cout << *a << std::endl;
	// std::cout << a << std::endl;
}

int main() {
	int b = 3;
	increment (&b);
	std::cout << b << std::endl;

	return 0;
}
