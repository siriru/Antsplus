/*
 * Ant.cpp
 *
 *  Created on: 25 mai 2013
 *      Author: siriru
 */

#include "Ant.h"
#include <iostream>

Ant::Ant() : Element(sf::Vector2f(0,0), 3, 3, false), destination(sf::Vector2f(0,0)), number(0), age(0), speed(1)
{

}

Ant::Ant(int n) : Element(sf::Vector2f(0,0), 3, 3, false), destination(sf::Vector2f(0,0)), number(n), age(0), speed(1)
{

}

Ant::Ant(sf::Vector2f p, int n, int a, int w, int h, int sp) : Element(p, w, h, false), destination(p), number(n), age(a), speed(sp)
{

}

Ant::Ant(const Ant & a) : Element(a), destination(a.destination), number(a.number), age(a.age), speed(a.speed)
{

}

Ant::~Ant()
{

}

sf::Vector2f Ant::getDestination() const {
	return destination;
}
void Ant::setDestination(sf::Vector2f destination) {
	this->destination = destination;
}

int Ant::getAge() const
{
	return age;
}
void Ant::setAge(int a)
{
	age = a;
}

int Ant::getSpeed() const
{
	return speed;
}
void Ant::setSpeed(int sp)
{
	speed = sp;
}

int Ant::getNumber() const {
	return number;
}

void Ant::setNumber(int number) {
	this->number = number;
}

Ant& Ant::operator=(Ant const& a)
{
	if(this != &a)
	//On vérifie que l'objet n'est pas le même que celui reçu en argument
	{
		this->position = a.position;
		this->destination = a.destination;
		this->number = a.number;
		this->age = a.age;
		this->width = a.width;
		this->height = a.height;
		this->speed = a.speed;
		this->selected = false;
	}
	return *this; //On renvoie l'objet lui-même
}
