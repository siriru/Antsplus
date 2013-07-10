/*
 * Ant.h
 *
 *  Created on: 25 mai 2013
 *      Author: siriru
 */

#ifndef ANT_H_
#define ANT_H_

#include <SFML/Graphics.hpp>

class Ant {
protected:
	int age, size, speed;
	sf::RectangleShape shape;

public:
	Ant();
	Ant(sf::Vector2f p, int a, int s, int sp);
	virtual ~Ant();

	int getAge() const;
	void setAge(int a);
	int getSize() const;
	void setSize(int s);
	int getSpeed() const;
	void setSpeed(int sp);
	sf::Vector2f getPosition() const;
	void setPosition(sf::Vector2f p);
	virtual sf::RectangleShape getShape() const;

	void move();
};

#endif /* ANT_H_ */
