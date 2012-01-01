/*
 * UrakkaTyontekija.h
 *
 *  Created on: 29.12.2011
 *      Author: David
 */
#ifndef UrakkaTyontekija_H_
#define UrakkaTyontekija_H_

#include "Tyontekija.h"

class UrakkaTyontekija: public Tyontekija {
public:
	UrakkaTyontekija();
	UrakkaTyontekija(string name, double palkka);
	virtual ~SalaiedWorker();
	virtual double compute_pay(int tunnit);
};

#endif /* UrakkaTyontekija_H_ */
