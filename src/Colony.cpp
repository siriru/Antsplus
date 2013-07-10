/*
 * Colony.cpp
 *
 *  Created on: 25 mai 2013
 *      Author: siriru
 */

#include "Colony.h"

Colony::Colony() :
	width(15), height(15), capacity(10), shape(sf::RectangleShape(sf::Vector2f(width, height))), queen(NULL)
{
	shape.setFillColor(sf::Color::White);
	shape.setPosition(sf::Vector2f(50, 50));
}

Colony::Colony(sf::Vector2f p, int w, int h, int c, Queen &queen) :
	width(w), height(h), capacity(c), shape(sf::RectangleShape(sf::Vector2f(width, height))), queen(&queen)
{
	shape.setFillColor(sf::Color::White);
	shape.setPosition(p);
}

Colony::Colony(Colony const & c) :
	width(c.width), height(c.height), capacity(c.capacity), shape(sf::RectangleShape(sf::Vector2f(width, height)))
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
void Colony::setCapacity(int c)
{
	capacity = c;
}

int Colony::getWidth() const
{
	return width;
}
void Colony::setWidth(int width)
{
	this->width = width;
}

int Colony::getHeight() const
{
	return height;
}
void Colony::setHeight(int height)
{
	this->height = height;
}

sf::Vector2f Colony::getPosition() const
{
	return shape.getPosition();
}
void Colony::setPosition(sf::Vector2f p)
{
	shape.setPosition(p);
}

sf::RectangleShape Colony::getShape() const
{
	return shape;
}

Queen * Colony::getQueen() const
{
	return queen;
}
void Colony::setQueen(Queen* queen)
{
	this->queen = queen;
}
