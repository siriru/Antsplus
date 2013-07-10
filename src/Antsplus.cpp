//============================================================================
// Name        : Antsplus.cpp
// Author      : Cyril Flieller
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Ant.h"
#include "Queen.h"
#include "Colony.h"

#include <SFML/Graphics.hpp>
using namespace sf;
#include <vector>

int main()
{
    RenderWindow window(VideoMode(800,600,32), "Ants");
    Colony colony;
    Colony colony2;
    Queen q(Vector2f(100,100), 1, 6, 1);
    Queen q2(Vector2f(250,100), 1, 6, 1);
    colony = q.createColony(30, 20, 10);
    q.setPosition(Vector2f(500,500));
    colony2 = q.createColony(50, 20, 20);
    /*vector<Ant*> tabAnt(0);
    for(int i=0;i<10;i++) {
    	tabAnt.push_back(new Ant(Vector2f(100+10*i,100+i*2), 0, 3, 1));
    }
    Ant ant(Vector2f(100,100), 0, 3, 1);*/
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();

            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
            	sf::Vector2f localPosition = sf::Vector2f((float)sf::Mouse::getPosition(window).x, (float)sf::Mouse::getPosition(window).y);
            	if(localPosition.x >= colony.getPosition().x && localPosition.x <= colony.getPosition().x + colony.getWidth()
            			&& localPosition.y >= colony.getPosition().y && localPosition.y <= colony.getPosition().y + colony.getHeight()) {
					cout << "true" << endl;
            	}
            	else cout << "false" << endl;
            	colony.getQueen()->setPosition(localPosition);
            }
        }

        window.clear();
        window.draw(colony.getShape());
        window.draw(colony2.getShape());
        window.draw(q.getShape());
        window.draw(q2.getShape());

        if(colony.getQueen()->getPosition().x == 100) {
        	cout << "changement de reine" << endl;
        	colony.setQueen(&q2);
        }
        /*for(unsigned int i=0;i<tabAnt.size();i++) {
        	tabAnt[i]->move();
        }
        for(unsigned int i=0;i<tabAnt.size();i++) {
        	window.draw(tabAnt[i]->getShape());
		}*/

        window.display();
    }

    return 0;
}
