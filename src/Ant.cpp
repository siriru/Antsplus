/*
 * Ant.cpp
 *
 *  Created on: 25 mai 2013
 *      Author: siriru
 */

#include "Ant.h"
#include <iostream>

Ant::Ant() : number(0), age(0), size(3), speed(1), selected(false), shape(sf::RectangleShape(sf::Vector2f(size, size)))
{

}

Ant::Ant(int n) : number(n), age(0), size(3), speed(1), selected(false), shape(sf::RectangleShape(sf::Vector2f(size, size)))
{
	shape.setFillColor(sf::Color::White);
	shape.setPosition(sf::Vector2f(0, 0));
}

Ant::Ant(sf::Vector2f p, int n, int a, int s, int sp) : number(n), age(a), size(s), speed(sp), selected(false), shape(sf::RectangleShape(sf::Vector2f(s, s)))
{
	shape.setFillColor(sf::Color::White);
	shape.setPosition(p);
}

Ant::Ant(const Ant & a)
{
	this->number = a.number;
	this->age = a.age;
	this->size = a.size;
	this->speed = a.speed;
	this->selected = false;
	this->shape = a.shape;
	this->shape.setFillColor(sf::Color::White);
	this->shape.setPosition(a.shape.getPosition());
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

int Ant::getNumber() const {
	return number;
}

void Ant::setNumber(int number) {
	this->number = number;
}

bool Ant::isSelected() const {
	return selected;
}

void Ant::setSelected(bool selected) {
	this->selected = selected;
}

void Ant::move()
{
	sf::Vector2f to;
	//sf::Vector2f from = getPosition();
	setPosition(to);
}
