/*
 * Element.cpp
 *
 *  Created on: 11 juil. 2013
 *      Author: flieller
 */

#include "Element.h"

Element::Element() : position(sf::Vector2f(0,0)), width(0), height(0), selected(false)
{

}

Element::Element(sf::Vector2f p, int w, int h, bool s) : position(p), width(w), height(h), selected(s)
{

}

Element::Element(const Element & e) : position(e.position), width(e.width), height(e.height), selected(false)
{

}

sf::Vector2f Element::getPosition() const
{
	return this->position;
}
void Element::setPosition(sf::Vector2f position)
{
	this->position = position;
}

int Element::getWidth() const {
	return width;
}
void Element::setWidth(int width) {
	this->width = width;
}

int Element::getHeight() const {
	return height;
}
void Element::setHeight(int height) {
	this->height = height;
}

bool Element::isSelected() const {
	return selected;
}
void Element::setSelected(bool selected) {
	this->selected = selected;
}

Element::~Element()
{
	// TODO Auto-generated destructor stub
}

