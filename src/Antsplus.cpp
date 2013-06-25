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
#include "Colony.h"

#include <SFML/Graphics.hpp>
using namespace sf;
#include <vector>

int main()
{
    RenderWindow window(VideoMode(800,600,32), "Ants");
    vector<Ant*> tabAnt(0);
    for(int i=0;i<10;i++) {
    	tabAnt.push_back(new Ant(Vector2f(100+10*i,100+i*2), 0, 3, 1));
    }
    Ant ant(Vector2f(100,100), 0, 3, 1);
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        for(unsigned int i=0;i<tabAnt.size();i++) {
        	tabAnt[i]->move();
        }
        for(unsigned int i=0;i<tabAnt.size();i++) {
        	window.draw(tabAnt[i]->getShape());
		}

        window.display();
    }

    return 0;
}
