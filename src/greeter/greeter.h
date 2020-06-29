#pragma once

#include <iostream>

namespace example {

class Greeter {
	public:
		virtual ~Greeter() = default;

		void setName(const char* name);
		std::string generateGreeting();

	protected:
		const char* name = nullptr;
};

} // namespace example
