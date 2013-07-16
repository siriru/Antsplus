/*
 * Manager.h
 *
 *  Created on: 10 juil. 2013
 *      Author: flieller
 */

#ifndef MANAGER_H_
#define MANAGER_H_

#include <vector>
#include "Ant.h"
#include "Colony.h"
#include "Element.h"

class Ant;
class Colony;
class Manager {
private:
	std::vector<Element*> ants;
	std::vector<Element*> colonies;
	Element* selection;
	std::vector<Ant*> movement;
public:
	Manager();
	virtual ~Manager();

	std::vector<Element*> getAnts();
	std::vector<Element*> getColonies();

	void addAnt(Ant* ant);
	void addColony(Colony* colony);

	void removeAnt(Ant* ant);
	void removeColony(Colony* colony);

	void draw(sf::RenderWindow * window);
	void drawElement(sf::RenderWindow * window, std::vector<Element*> vector);

	void selectionEvent(sf::Vector2i mousePosition);
	bool checkSelection(sf::Vector2f mousePosition, std::vector<Element*> vector, bool selection);
	void clearSelection();

	void movementEvent(sf::Vector2i mousePosition);
};

#endif /* MANAGER_H_ */
