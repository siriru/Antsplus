/*
 * Ant.cpp
 *
 *  Created on: 25 mai 2013
 *      Author: siriru
 */

#include "Ant.h"
#include <iostream>

Ant::Ant() : age(0), size(3), speed(1), shape(sf::RectangleShape(sf::Vector2f(size, size)))
{
	shape.setFillColor(sf::Color::White);
	shape.setPosition(sf::Vector2f(0, 0));
}

Ant::Ant(sf::Vector2f p, int a, int s, int sp) : age(a), size(s), speed(sp), shape(sf::RectangleShape(sf::Vector2f(s, s)))
{
	shape.setFillColor(sf::Color::White);
	shape.setPosition(p);
}

Ant::~Ant()
{

}

int Ant::getAge() const
{
	return age;
}
void Ant::setAge(int a)
{
	age = a;
}

int Ant::getSize() const
{
	return size;
}
void Ant::setSize(int s)
{
	size = s;
}

int Ant::getSpeed() const
{
	return speed;
}
void Ant::setSpeed(int sp)
{
	speed = sp;
}

sf::Vector2f Ant::getPosition() const
{
	return shape.getPosition();
}
void Ant::setPosition(sf::Vector2f p)
{
	shape.setPosition(p);
}

sf::RectangleShape Ant::getShape() const
{
	return shape;
}

void Ant::move()
{
	sf::Vector2f to;
	//sf::Vector2f from = getPosition();
	setPosition(to);
}
