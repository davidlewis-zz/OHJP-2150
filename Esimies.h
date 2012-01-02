/*
 * Esimies.h
 *
 *  Created on: Jan 2, 2012
 *      Author: David lewis 225045
 */

#ifndef ESIMIES_H_
#define ESIMIES_H_

class Esimies {
public:
	Esimies();
	Esimies(string name, double salary);
	virtual ~Esimies();
	virtual double compute_pay(int tunnit);
};

#endif /* ESIMIES_H_ */
