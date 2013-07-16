/*
 * Queen.h
 *
 *  Created on: 8 juil. 2013
 *      Author: flieller
 */

#ifndef QUEEN_H_
#define QUEEN_H_

#include "Ant.h"
#include "Colony.h"
#include <iostream>

class Colony;
class Queen: public Ant
{
	private:
		Colony* colony;
	public:
		Queen(int number);
		Queen(sf::Vector2f position, int number, int age, int width, int height, int speed);
		Queen(const Queen & queen);
		virtual ~Queen();

		Colony createColony(int width, int height, int capacity);

		Colony* getColony();
		void setColony(Colony* colony);

		Queen& operator=(Queen const& queen);
};

#endif /* QUEEN_H_ */
