/*
 * paaohjelma.cpp
 *
 *  Created on: 29.12.2011
 *      Author: David Lewis 225045
 */

#include "Tyontekija.h"
#include "TuntiTyontekija.h"
#include "UrakkaTyontekija.h"
int main(void)
{
	Tyontekija *t=new Tyontekija("David", 34.50);
	TuntiTyontekija *h = new TuntiTyontekija("Heikki", 10);
	UrakkaTyontekija *u = new UrakkaTyontekija("Sauli", 15);


	cout<<"14\n"<< t->get_name()<<" Palkka: "<< t->compute_pay(40)<<"\n";
	cout<<u->get_name()<<" Palkka: "<< h->compute_pay(50)<<std::endl;
	cout<<u->get_name()<<" Palkka: "<< u->compute_pay(50)<<std::endl;

	delete u;
	delete t;
	delete h;
	return 0;
}



