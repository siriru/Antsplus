/*
 * Colony.h
 *
 *  Created on: 25 mai 2013
 *      Author: siriru
 */

#ifndef COLONY_H_
#define COLONY_H_

#include "Element.h"
#include "Queen.h"

class Queen;
class Colony: public Element {
private:
	int capacity;
	Queen *queen;

public:
	Colony();
	Colony(sf::Vector2f position, int width, int height, int capacity, Queen &queen);
	Colony(Colony const & colony);
	virtual ~Colony();

	int getCapacity() const;
	void setCapacity(int capacity);

	Queen* getQueen() const;
	void setQueen(Queen* queen);

	Colony& operator=(Colony const& colony);
};

#endif /* COLONY_H_ */
