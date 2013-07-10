/*
 * Manager.cpp
 *
 *  Created on: 10 juil. 2013
 *      Author: flieller
 */

#include <iostream>
#include "Manager.h"

Manager::Manager() : ants(0), colonies(0)
{

}

Manager::~Manager()
{

}

std::vector<Ant*> Manager::getAnts()
{
	return this->ants;
}
void Manager::addAnt(Ant* ant)
{
	this->ants.push_back(ant);
}
void Manager::removeAnt(Ant* ant)
{
	std::vector<Ant*> temp;
	for(unsigned int i=0; i<this->ants.size();i++) {
		if(this->ants.at(i) != ant) {
			temp.push_back(this->ants.at(i));
		}
	}
	this->ants = temp;
}

std::vector<Colony*> Manager::getColonies()
{
	return this->colonies;
}
void Manager::addColony(Colony* colony)
{
	this->colonies.push_back(colony);
}
void Manager::removeColony(Colony* colony)
{
	std::vector<Colony*> temp;
	for(unsigned int i=0; i<this->colonies.size();i++) {
		if(this->colonies.at(i) != colony) {
			temp.push_back(this->colonies.at(i));
		}
	}
	this->colonies = temp;
}

void Manager::selectionEvent(sf::Vector2i mPosition)
{
	bool selected = false;
	sf::Vector2f mousePosition = sf::Vector2f((float)mPosition.x, (float)mPosition.y);
	for(unsigned int i=0; i<this->ants.size();i++) {
		Ant* a = this->ants.at(i);
		sf::Vector2f position = a->getPosition();
		int size = a->getSize();
		if(mousePosition.x >= position.x && mousePosition.x <= position.x + size
				&& mousePosition.y >= position.y && mousePosition.y <= position.y + size
				&& selected == false) {

			a->setSelected(true);
			selected = true;
		}
		else a->setSelected(false);
	}
}

