/*
 * UrakkaTyontekija.cpp
 *
 *  Created on: 29.12.2011
 *      Author: David
 */

#include "UrakkaTyontekija.h"

UrakkaTyontekija::UrakkaTyontekija() {
	// TODO Auto-generated constructor stub

}
UrakkaTyontekija::UrakkaTyontekija(string name, double palkka): Tyontekija(name, palkka)
{
	;
}
double UrakkaTyontekija::compute_pay(int tunnit)
{
	return 40*Tyontekija::get_palkka();
}
UrakkaTyontekija::~UrakkaTyontekija() {
	// TODO Auto-generated destructor stub
}
