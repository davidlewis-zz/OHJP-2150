/*
 * paaohjelma.cpp
 *
 * Ohjelma laskee yrityksen työntekijöiden palkan tunti- ja urakkatyöntekijöiden osalta.
 *  tuntityöläisillä palkka on 40 tunnista ja siitä edespäin 1.5 kertainen. Urakkalaisilla maksu 40 tunnin mukaan loppu
 *  vapaata
 *
 *  Created on: 29.12.2011
 *      Author: David Lewis 225045
 */

#include "Tyontekija.h"
#include "TuntiTyontekija.h"
#include "UrakkaTyontekija.h"
#include "Esimies.h"
using namespace std;

int main(void)
{
	Esimies *e=new Esimies("Jaakko", 41);
	Tyontekija *t=new Tyontekija("David", 54.00);
	TuntiTyontekija *h = new TuntiTyontekija("Heikki", 33);
	UrakkaTyontekija *u = new UrakkaTyontekija("Sauli", 13);


	cout<<"14\n"<< t->get_name()<<" Palkka: "<< t->compute_pay(40)<<"\n";
	cout<<h->get_name()<<" Palkka: "<< h->compute_pay(50)<<std::endl;
	cout<<u->get_name()<<" Palkka: "<< u->compute_pay(50)<<std::endl;
	cout<<u->get_name()<<" Palkka: "<< e->compute_pay(42)<<std::endl;

	/*cout << "Tyontekija:" << endl;
	  cout << "Nimi: " << t.getName() << endl;
	  cout << "Palkka: " << compute_pay(40) << endl;

	  cout << "vaihda tyontekijan nimi" << endl;
	  t.setName("David");
	  cout << "uusi nimi: " << t.getName() << endl;

	  cout << endl;

	  cout << "Esimies:" << endl;
	  cout << "nimi: " << e.getName() << endl;
	  cout << "palkka: " << e.pay(40.0) << endl;

	  cout << "muuta esimiehen palkka" << endl;
	  e.setSalaried(false);
	  cout << "Uusi palkka: " << e.pay(40.0) << endl;

	  cout << "TuntiTyontekija:" << endl;
	  	  cout << "Nimi: " << h.getName() << endl;
	  	  cout << "Palkka: " << compute_pay(40) << endl;

	  	  cout << "vaihda tyontekijan nimi" << endl;
	  	  h.setName("Heikki");
	  	  cout << "uusi nimi: " << h.getName() << endl;

	  	  cout << endl;

	  	cout << "UrakkaTyontekija:" << endl;
	  		  cout << "Nimi: " << u.getName() << endl;
	  		  cout << "Palkka: " << compute_pay(40) << endl;

	  		  cout << "vaihda tyontekijan nimi" << endl;
	  		  u.setName("Heikki");
	  		  cout << "uusi nimi: " << u.getName() << endl;

	  		  cout << endl;

	  return 0;
	}*/


    delete e;
	delete u;
	delete t;
	delete h;
	return 0;
}



