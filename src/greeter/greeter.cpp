#include "greeter.h"
#include <sstream>

using namespace example;

void Greeter::setName(const char *pName)
{
	if (pName != nullptr) {
		name = pName;
	}
}

std::string Greeter::generateGreeting()
{
	std::stringstream msg;

	msg << "H'i ";

	msg << (name == nullptr ? "Anonymous" : name);

	msg <<  "!";

	return msg.str();
}
