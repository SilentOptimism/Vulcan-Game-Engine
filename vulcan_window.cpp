#include "vulcan_window.hpp"

// Contains the implementation for our constructors and destructors
namespace myVulcan {                    
	// Creates our GLFW window
	LveWindow::LveWindow(int w, int h, std::string name) : width{w}, height{h}, windowName{name} { 
		initWindow();
	}

	// Destroys our GLFW window
	LveWindow::~LveWindow(){ 
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void LveWindow::initWindow() {
		glfwInit();
		
		// GLFW_FALSE == GLFW_NO_API == 0 == false 
		// Merely semantic sugar for false
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); // Disables the creation of GLFW context when a window is created
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); // Disables resizability
		// We will need to handle window resizes in a special way

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);

	}
}
