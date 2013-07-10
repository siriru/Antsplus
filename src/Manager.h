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

class Ant;
class Colony;
class Manager {
private:
	std::vector<Ant*> ants;
	std::vector<Colony*> colonies;
public:
	Manager();
	virtual ~Manager();

	std::vector<Ant*> getAnts();
	std::vector<Colony*> getColonies();

	void addAnt(Ant* ant);
	void addColony(Colony* colony);

	void removeAnt(Ant* ant);
	void removeColony(Colony* colony);

	void selectionEvent(sf::Vector2i mousePosition);
};

#endif /* MANAGER_H_ */
