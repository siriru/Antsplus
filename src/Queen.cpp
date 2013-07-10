/*
 * Queen.cpp
 *
 *  Created on: 8 juil. 2013
 *      Author: flieller
 */

#include "Queen.h"

Queen::Queen() : Ant(sf::Vector2f(100,100), 0, 6, 1)
{

}

Queen::Queen(sf::Vector2f p, int a, int s, int sp) : Ant(p, a, s, sp)
{

}

Queen::Queen(const Queen & q)
{
	this->age = q.age;
	this->size = q.size;
	this->speed = q.speed;
	this->shape = q.shape;
	this->shape.setFillColor(sf::Color::White);
	this->shape.setPosition(q.shape.getPosition());
}

Queen::~Queen()
{
	// TODO Auto-generated destructor stub
}

Colony Queen::createColony(int width, int height, int capacity)
{
	float x = this->shape.getPosition().x + 1.0;
	float y = this->shape.getPosition().y + 1.0;
	Colony colony(sf::Vector2f(x,y), width, height, capacity, *this);
	return colony;
}
