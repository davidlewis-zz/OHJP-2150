/*
 * Tyontekija.h
 *
 *  Created on: 29.12.2011
 *      Author: David
 */

#ifndef Tyontekija_H_
#define Tyontekija_H_
#include <iostream>
#include <string>

using std::string;
using std::cout;

class Tyontekija {
public:
	Tyontekija();
	Tyontekija(string name, double palkka);
	virtual ~Tyontekija();
	virtual double compute_pay(int hours);
	virtual void print();
	virtual string get_name() const;
	double get_palkka() const;
private:
	string name_;
	double palkka_;


};

#endif /* Tyontekija_H_ */
