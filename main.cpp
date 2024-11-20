#include "first_app.hpp"

// std
#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main() {
	myVulcan::FirstApp app{};

	try {
		app.run();
	} 
	catch (const std::exception &e) {
		// just outputs what ever exception occured to the console
		std::cerr << e.what() << '\n';

		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}