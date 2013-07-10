//============================================================================
// Name        : Antsplus.cpp
// Author      : Cyril Flieller
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Manager.h"
#include "Ant.h"
#include "Queen.h"
#include "Colony.h"

#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(800,600,32), "Ants");
    Manager manager;
    Queen q(Vector2f(100,100), 1, 1, 6, 1);
    Queen q2(Vector2f(102,102), 2, 1, 6, 1);
    Ant a(Vector2f(200,200), 1, 1, 3, 1);
    manager.addAnt(&q);
    manager.addAnt(&q2);
    manager.addAnt(&a);
    //colony = q.createColony(30, 30, 10);
    //q.setPosition(Vector2f(500,500));
    //colony2 = q.createColony(50, 50, 20);
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
    	window.clear();
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();

            if (Mouse::isButtonPressed(Mouse::Left))
            {
            	manager.selectionEvent(Mouse::getPosition(window));
            }
        }

        for(unsigned int i=0; i<manager.getAnts().size();i++) {
        	Ant* a = manager.getAnts().at(i);
        	window.draw(a->getShape());
        	if(a->isSelected()) {
        		RectangleShape selection(Vector2f(a->getSize() + 4, a->getSize() + 4));
				selection.setPosition(Vector2f(a->getPosition().x - 2.0, a->getPosition().y - 2.0));
				selection.setFillColor(Color::Transparent);
				selection.setOutlineThickness(1);
				selection.setOutlineColor(Color::White);
				window.draw(selection);
        	}
        }

        window.display();
    }

    return 0;
}
