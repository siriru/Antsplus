/*
 * Colony.h
 *
 *  Created on: 25 mai 2013
 *      Author: siriru
 */

#ifndef COLONY_H_
#define COLONY_H_

#include <SFML/Graphics.hpp>
#include "Queen.h"

class Queen;
class Colony {
private:
	int width, height, capacity;
	sf::RectangleShape shape;
	Queen *queen;

public:
	Colony();
	Colony(sf::Vector2f p, int w, int h, int c, Queen &queen);
	Colony(Colony const & c);
	virtual ~Colony();

	int getCapacity() const;
	void setCapacity(int c);

	sf::Vector2f getPosition() const;
	void setPosition (sf::Vector2f p);

	int getHeight() const;
	void setHeight(int height);

	int getWidth() const;
	void setWidth(int width);

	sf::RectangleShape getShape() const;

	Queen* getQueen() const;
	void setQueen(Queen* queen);
};

#endif /* COLONY_H_ */
