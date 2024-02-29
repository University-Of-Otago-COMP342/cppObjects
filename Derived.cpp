#include "Derived.h"

#include <iostream>

Derived::Derived() : Object() {
	std::cout << "Derived " << id_ << " created with Default Constructor" << std::endl;
}

Derived::Derived(const Derived& d) {
	std::cout << "Derived " << id_ << " created with Copy Constructor from Derived " << d.id_ << std::endl;
}

Derived::~Derived() {
	std::cout << "Derived " << id_ << " Destroyed" << std::endl;
}

void Derived::whatAmI() const {
	std::cout << "I am a Derived" << std::endl;
}

Derived& Derived::operator=(const Derived& d) {
	// check for self assignment
	if (this != &d) {
		std::cout << "Assigning Derived " << d.id_ << " to Derived " << id_ << std::endl;
		//assign the value
		this->setValue(d.getValue());
	} else {
		std::cout << "Assigning Derived " << id_ << " to itself doesn't do anything" << std::endl;
	}
	return *this;
}
