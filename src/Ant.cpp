/*
 * Ant.cpp
 *
 *  Created on: 25 mai 2013
 *      Author: siriru
 */

#include "Ant.h"
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Ant::Ant()
{
	this->speed = 1;
	this->size = 1;
	this->age = 0;
}

Ant::Ant(sf::Vector2f position, int age, int size, int speed)
{
	this->size = size;
	this->speed = speed;
	this->age = age;
	this->shape = sf::RectangleShape(sf::Vector2f(this->size, this->size));
	this->shape.setFillColor(sf::Color::White);
	this->shape.setPosition(position);
}

Ant::~Ant()
{

}

int Ant::getAge() const
{
	return this->age;
}
void Ant::setAge(int age)
{
	this->age = age;
}

int Ant::getSize() const
{
	return this->size;
}
void Ant::setSize(int size)
{
	this->size = size;
}

int Ant::getSpeed() const
{
	return this->speed;
}
void Ant::setSpeed(int speed)
{
	this->speed = speed;
}

sf::Vector2f Ant::getPosition() const
{
	return this->shape.getPosition();
}
void Ant::setPosition(sf::Vector2f position)
{
	this->shape.setPosition(position);
}

sf::RectangleShape Ant::getShape() const
{
	return this->shape;
}

void Ant::move()
{
	srand (time(NULL));
	sf::Vector2f to;
	sf::Vector2f from = this->getPosition();
	double randx = rand() % 2 + (-1);
	sleep(1000);
	double randy = rand() % 2 + (-1);
	sleep(1000);
	std::cout << randx << std::endl;
	to.x = from.x + randx;
	to.y = from.y + randy;
	this->setPosition(to);
}
