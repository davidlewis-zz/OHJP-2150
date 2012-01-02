/*
 * Esimies.cpp
 *
 *  Created on: Jan 2, 2012
 *      Author: David lewis 225045
 */

#include "Esimies.h"

Esimies::Esimies() {
	// TODO Auto-generated constructor stub

}

Esimies::Esimies(string name, double palkka): Tyontekija(name, palkka)
{
	;
}

double Esimies::compute_pay(int tunnit)
{
	double palkka=0;
	if(tunnit>40){
		palkka=40*Tyontekija::get_palkka();
		palkka+=(tunnit-40)*(Tyontekija::get_palkka()*1.5);
	}
	else
		palkka=tunnit*Tyontekija::get_palkka();
	return palkka;
}


Esimies::~Esimies() {
	// TODO Auto-generated destructor stub
}

