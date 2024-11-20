#pragma once // prevents you from including a library/header once its already opened

// Has GLFW do the #include <vulkan/vulkan.h> to make sure they are linked
#define GLFW_INCLUDE_VULKAN 

#include <GLFW/glfw3.h>

#include <string>

namespace myVulcan{

class LveWindow {
	public:	
//Constructor and destructors
		// Window Constructor/Deconstructor
		LveWindow(int w, int h, std::string name); 
		~LveWindow(); 

		
		LveWindow(const LveWindow&) = delete;
		LveWindow& operator =(const LveWindow&) = delete;
		/* 
			Deleting the copy constructor and copy operator: 
				avoids duplicate windows which can cause dangling pointers as terminating 1window/shared glfwwindow would lead to the other window dangling
		*/


		bool shouldClose() { return glfwWindowShouldClose(window); }

	private:
		void initWindow(); 

// Member variables
		const int width;
		const int height;
		std::string windowName;
		GLFWwindow* window;
	};
}

// We are adhearing to: Resource Aquistion is Initialization
	// Resource creation happens when we initialize our variables
	// and our cleanups are performed by our destructors
