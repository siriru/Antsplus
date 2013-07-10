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
	int number, age, size, speed;
	bool selected;
	sf::RectangleShape shape;

public:
	Ant();
	Ant(int number);
	Ant(sf::Vector2f p, int number, int age, int size, int speed);
	Ant(const Ant & a);
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
	int getNumber() const;
	void setNumber(int number);
	bool isSelected() const;
	void setSelected(bool selected);

	void move();
};

#endif /* ANT_H_ */
