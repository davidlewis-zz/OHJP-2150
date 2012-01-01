/*
 * TuntiTyontekija.cpp
 *
 *  Created on: 29.12.2011
 *      Author: David
 */
#include "TuntiTyontekija.h"

TuntiTyontekija::TuntiTyontekija() {
	// TODO Auto-generated constructor stub

}
TuntiTyontekija::TuntiTyontekija(string name, double palkka): Tyontekija(name,palkka)
{
	;
}
TuntiTyontekija::~TuntiTyontekija() {
	// TODO Auto-generated destructor stub
}
double TuntiTyontekija::compute_pay(int tunnit)
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
