#include <iostream>
#include <greeter.h>

int main(int argc, char* argv[]) {
	example::Greeter greeter;

	if (argc > 1) {
		greeter.setName(argv[1]);
	}

	std::cout << greeter.generateGreeting() << std::endl;

	return 0;
}
