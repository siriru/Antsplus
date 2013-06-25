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
	private:
		int age, size, speed;
		sf::RectangleShape shape;


	public:
		Ant();
		Ant(sf::Vector2f position, int age, int size, int speed);
		virtual ~Ant();

		int getAge() const;
		void setAge(int age);
		int getSize() const;
		void setSize(int size);
		int getSpeed() const;
		void setSpeed(int speed);
		sf::Vector2f getPosition() const;
		void setPosition(sf::Vector2f position);
		sf::RectangleShape getShape() const;

		void move();
};

#endif /* ANT_H_ */
