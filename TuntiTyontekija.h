/*
 * TuntiTyontekija.h
 *
 *  Created on: 29.12.2011
 *      Author: David
 */

#ifndef TuntiTyontekija_H_
#define TuntiTyontekija_H_

#include "Tyontekija.h"

class TuntiTyontekija: public Tyontekija {
public:
	TuntiTyontekija();
	TuntiTyontekija(string name, double salary);
	virtual ~TuntiTyontekija();
	virtual double compute_pay(int tunnit);
	//virtual double compute_pay(int tunnit);
};

#endif /* TuntiTyontekija_H_ */
