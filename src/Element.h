/*
 * Element.h
 *
 *  Created on: 11 juil. 2013
 *      Author: flieller
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_

#include <SFML/Graphics.hpp>

class Element {
	protected:
		sf::Vector2f position;
		int width, height;
		bool selected;
	public:
		Element();
		Element(sf::Vector2f position, int width, int height, bool selected);
		Element(const Element & element);
		virtual ~Element();

		sf::Vector2f getPosition() const;
		void setPosition(sf::Vector2f position);
		int getHeight() const;
		void setHeight(int height);
		bool isSelected() const;
		void setSelected(bool selected);
		int getWidth() const;
		void setWidth(int width);
};

#endif /* ELEMENT_H_ */
