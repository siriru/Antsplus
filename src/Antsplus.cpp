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
    Queen q(Vector2f(100,100), 1, 1, 6, 6, 1);
    Queen q2(Vector2f(102,102), 2, 1, 6, 6, 1);
    Ant a(Vector2f(200,200), 1, 1, 3, 3, 1);
    Colony c(Vector2f(500,200), 50, 50, 30, q);
    //Colony c2;
    //c = q.createColony(30, 30, 10);
	//q.setPosition(Vector2f(500,500));
	//c2 = q.createColony(50, 50, 20);
    manager.addAnt(&q);
    manager.addAnt(&q2);
    manager.addAnt(&a);
    manager.addColony(&c);
   // manager.addColony(&c2);
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

            if (Mouse::isButtonPressed(Mouse::Right))
            {
            	manager.movementEvent(Mouse::getPosition(window));
            }
        }

        manager.draw(&window);
        window.display();
    }

    return 0;
}
