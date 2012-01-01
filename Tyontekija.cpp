/*
 * Tyontekija.cpp
 *
 *  Created on: 29.12.2011
 *      Author: David
 */

#include "Tyontekija.h"

Tyontekija::Tyontekija() {
	// TODO Auto-generated constructor stub

}

Tyontekija::Tyontekija( string name, double palkka) : name_(name), palkka_(palkka)
{
;
}

Tyontekija::~Tyontekija() {
	// TODO Auto-generated destructor stub
}


double Tyontekija::compute_pay(int tunnit)
{
	return tunnit*palkka_;
}


void Tyontekija::print()
{
	;
}
string Tyontekija::get_name() const {
	return name_;
}
double Tyontekija::get_palkka() const
{
	return palkka_;
}
