/*
 * Ant.h
 *
 *  Created on: 25 mai 2013
 *      Author: siriru
 */

#ifndef ANT_H_
#define ANT_H_

#include <SFML/Graphics.hpp>
#include "Element.h"

class Ant: public Element
{
	protected:
		sf::Vector2f destination;
		int number, age, speed;

	public:
		Ant();
		Ant(int number);
		Ant(sf::Vector2f position, int number, int age, int width, int height, int speed);
		Ant(const Ant & ant);
		virtual ~Ant();

		sf::Vector2f getDestination() const;
		void setDestination(sf::Vector2f destination);

		int getAge() const;
		void setAge(int age);
		int getSpeed() const;
		void setSpeed(int speed);
		int getNumber() const;
		void setNumber(int number);

		Ant& operator=(Ant const& ant);
};

#endif /* ANT_H_ */
