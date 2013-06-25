/*
 * Colony.cpp
 *
 *  Created on: 25 mai 2013
 *      Author: siriru
 */

#include "Colony.h"

Colony::Colony() {
	this->capacity = 0;
}

Colony::Colony(int capacity) {
	this->capacity = capacity;
}

Colony::~Colony() {

}

int Colony::getCapacity() const {
	return this->capacity;
}

void Colony::setCapacity(int capacity) {
	this->capacity = capacity;
}

