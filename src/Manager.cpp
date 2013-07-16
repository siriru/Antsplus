/*
 * Manager.cpp
 *
 *  Created on: 10 juil. 2013
 *      Author: flieller
 */

#include <iostream>
#include "Manager.h"

Manager::Manager() : ants(0), colonies(0), selection(NULL)
{

}

Manager::~Manager()
{

}

std::vector<Element*> Manager::getAnts()
{
	return this->ants;
}
void Manager::addAnt(Ant* ant)
{
	this->ants.push_back(ant);
}
void Manager::removeAnt(Ant* ant)
{
	std::vector<Element*> temp;
	for(unsigned int i=0; i<this->ants.size();i++) {
		if(this->ants.at(i) != ant) {
			temp.push_back(this->ants.at(i));
		}
	}
	this->ants = temp;
}

std::vector<Element*> Manager::getColonies()
{
	return this->colonies;
}
void Manager::addColony(Colony* colony)
{
	this->colonies.push_back(colony);
}
void Manager::removeColony(Colony* colony)
{
	std::vector<Element*> temp;
	for(unsigned int i=0; i<this->colonies.size();i++) {
		if(this->colonies.at(i) != colony) {
			temp.push_back(this->colonies.at(i));
		}
	}
	this->colonies = temp;
}

void Manager::draw(sf::RenderWindow * window)
{
	this->drawElement(window, this->ants);
	this->drawElement(window, this->colonies);
}

void Manager::drawElement(sf::RenderWindow * window, std::vector<Element*> vector)
{
	for(unsigned int i=0; i<vector.size();i++) {
		sf::RectangleShape shape(sf::Vector2f(vector.at(i)->getWidth(), vector.at(i)->getHeight()));
		shape.setFillColor(sf::Color::White);
		shape.setPosition(vector.at(i)->getPosition());
		window->draw(shape);

		/*if(vector.at(i)->isSelected()) {
			sf::RectangleShape selection(sf::Vector2f(vector.at(i)->getWidth() + 4, vector.at(i)->getHeight() + 4));
			selection.setPosition(sf::Vector2f(vector.at(i)->getPosition().x - 2.0, vector.at(i)->getPosition().y - 2.0));
			selection.setFillColor(sf::Color::Transparent);
			selection.setOutlineThickness(1);
			selection.setOutlineColor(sf::Color::White);
			window->draw(selection);
		}*/
	}
	if(this->selection) {
		sf::RectangleShape selection(sf::Vector2f(this->selection->getWidth() + 4, this->selection->getHeight() + 4));
		selection.setPosition(sf::Vector2f(this->selection->getPosition().x - 2.0, this->selection->getPosition().y - 2.0));
		selection.setFillColor(sf::Color::Transparent);
		selection.setOutlineThickness(1);
		selection.setOutlineColor(sf::Color::White);
		window->draw(selection);
	}
}

void Manager::selectionEvent(sf::Vector2i mPosition)
{
	//this->clearSelection();
	this->selection = NULL;
	sf::Vector2f mousePosition = sf::Vector2f((float)mPosition.x, (float)mPosition.y);
	bool selection = this->checkSelection(mousePosition, this->ants, false);
	if(!selection) this->checkSelection(mousePosition, this->colonies, selection);
}

bool Manager::checkSelection(sf::Vector2f mousePosition, std::vector<Element*> vector, bool selection=false)
{
	for(unsigned int i=0; i<vector.size();i++) {
		sf::Vector2f position = vector.at(i)->getPosition();
		int width = vector.at(i)->getWidth();
		int height = vector.at(i)->getHeight();
		if(mousePosition.x >= position.x && mousePosition.x <= position.x + width
				&& mousePosition.y >= position.y && mousePosition.y <= position.y + height
				&& selection == false) {

			vector.at(i)->setSelected(true);
			selection = true;
			this->selection = vector.at(i);
		}
		else vector.at(i)->setSelected(false);
	}
	return selection;
}

void Manager::clearSelection()
{
	/*std::vector<std::vector<Element*> > array;
	array.push_back(this->ants);
	array.push_back(this->colonies);
	for(unsigned int i=0; i<array.size(); i++) {
		for(unsigned int j=0; j<array.at(i).size(); j++) {
			array.at(i).at(j)->setSelected(false);
		}
	}*/
}

void Manager::movementEvent(sf::Vector2i mPosition)
{
	sf::Vector2f mousePosition = sf::Vector2f((float)mPosition.x, (float)mPosition.y);
	if(this->selection) {
		if(is)
	}
}
