#include "first_app.hpp"

namespace myVulcan {
	void FirstApp::run() {
		
		// It keeps the firstApp running until the window is closed
		while (!lveWindow.shouldClose()) {
			glfwPollEvents();
		}
	}
}
