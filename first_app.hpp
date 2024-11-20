#pragma once // Header guard

#include "vulcan_window.hpp"

// The headers for our first app

namespace myVulcan {
	class FirstApp {
		public:
			// Static: data persists within functions
			// Constexpr: Makes it constant and evaluates it during compile time rather than run time
			static constexpr int WIDTH = 800;
			static constexpr int HEIGHT = 600;

			void run();

		private:
			LveWindow lveWindow{ WIDTH, HEIGHT, "Hello Vulkan1" };

	};
}