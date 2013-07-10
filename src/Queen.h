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

class Colony;
class Queen: public Ant {
private:
	Colony* colony;
public:
	Queen();
	Queen(sf::Vector2f p, int a, int s, int sp);
	Queen( const Queen & q);
	virtual ~Queen();

	Colony createColony(int width, int height, int capacity);

	Colony* getColony();
	void setColony(Colony* colony);
};

#endif /* QUEEN_H_ */
