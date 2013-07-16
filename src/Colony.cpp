/*
 * Colony.cpp
 *
 *  Created on: 25 mai 2013
 *      Author: siriru
 */

#include "Colony.h"

Colony::Colony() : Element(sf::Vector2f(0,0), 15, 15, false), capacity(10), queen(NULL)
{
}

Colony::Colony(sf::Vector2f p, int w, int h, int c, Queen &queen) :
		Element(sf::Vector2f(p), 15, 15, false), capacity(c), queen(&queen)
{

}

Colony::Colony(Colony const & c) : Element(c), capacity(c.capacity)
{
    queen = new Queen(*(c.queen));
}

Colony::~Colony()
{
}

int Colony::getCapacity() const
{
	return capacity;
}
void Colony::setCapacity(int capacity)
{
	this->capacity = capacity;
}

Queen * Colony::getQueen() const
{
	return queen;
}

void Colony::setQueen(Queen* queen)
{
	this->queen = queen;
}

Colony& Colony::operator=(Colony const& c)
{
	if(this != &c)
	//On vérifie que l'objet n'est pas le même que celui reçu en argument
	{
		this->position = c.position;
		this->capacity = c.capacity;
		this->height = c.height;
		this->width = c.width;
		this->selected = false;

		delete this->queen;
		this->queen = new Queen(*(c.queen));
	}
	return *this; //On renvoie l'objet lui-même
}
