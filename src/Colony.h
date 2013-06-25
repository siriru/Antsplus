/*
 * Colony.h
 *
 *  Created on: 25 mai 2013
 *      Author: siriru
 */

#ifndef COLONY_H_
#define COLONY_H_

class Colony {
	private:
		int capacity;
	public:
		Colony();
		Colony(int capacity);
		virtual ~Colony();

		int getCapacity() const;
		void setCapacity(int capacity);
};

#endif /* COLONY_H_ */
