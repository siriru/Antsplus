/*
 * Queen.cpp
 *
 *  Created on: 8 juil. 2013
 *      Author: flieller
 */

#include "Queen.h"

Queen::Queen(int number) : Ant(number), colony(NULL)
{

}

Queen::Queen(sf::Vector2f p, int n, int a, int w, int h, int sp) : Ant(p, n, a, w, h, sp), colony(NULL)
{

}

Queen::Queen(const Queen & q) : Ant(q)
{
	this->colony = new Colony(*(q.colony));
}

Queen::~Queen()
{
	// TODO Auto-generated destructor stub
}

Colony Queen::createColony(int width, int height, int capacity)
{
	float x = this->position.x + 1.0;
	float y = this->position.y + 1.0;
	//Colony* previousColony = this->getColony();
	//if(previousColony != 0) previousColony->setQueen(0);
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

Queen& Queen::operator=(Queen const& q)
{
    if(this != &q)
    //On vérifie que l'objet n'est pas le même que celui reçu en argument
    {
    	this->position = q.position;
    	this->destination = q.destination;
    	this->number = q.number;
		this->age = q.age;
		this->width = q.width;
		this->height = q.height;
		this->speed = q.speed;
		this->colony = q.colony;

		delete this->colony;
		this->colony = new Colony(*(q.colony));
    }
    return *this; //On renvoie l'objet lui-même
}
