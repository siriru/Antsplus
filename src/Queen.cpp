/*
 * Queen.cpp
 *
 *  Created on: 8 juil. 2013
 *      Author: flieller
 */

#include "Queen.h"

Queen::Queen(int n) : Ant(sf::Vector2f(100,100), n, 0, 6, 1), colony(NULL)
{

}

Queen::Queen(sf::Vector2f p, int n, int a, int s, int sp) : Ant(p, n, a, s, sp), colony(NULL)
{

}

Queen::Queen(const Queen & q)
{
	this->number = q.number;
	this->age = q.age;
	this->size = q.size;
	this->speed = q.speed;
	this->shape = q.shape;
	this->colony = q.colony;
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
	Colony* previousColony = this->getColony();
	if(previousColony != 0) previousColony->setQueen(0);
	Colony colony(sf::Vector2f(x,y), width, height, capacity, *this);
	this->setColony(&colony);
	return colony;
}

Colony* Queen::getColony()
{
	return this->colony;
}
void Queen::setColony(Colony* colony)
{
	this->colony = colony;
}
