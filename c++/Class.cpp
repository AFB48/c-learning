#include <iostream>
#include "projects.h"

class stats {
	private:


	public:

		double vitality;
		double strength;
		double speed;
		double intellect;

		bool brawl;
		bool assin;
		bool magic;

		stats() {
			vitality = 100;
			strength = 100;
			speed = 100;
			intellect = 100;
		}

		double powerlevel() {
			return vitality + strength + speed + intellect;
		}
};


		



void o() {
	stats brawler, magician,assasin;
	//brawler stats
	brawler.vitality = 400;
	brawler.strength = 300;
	brawler.speed = 200;
	brawler.intellect = 100;
	//magician stats
	magician.vitality = 250;
	magician.strength = 250;
	magician.speed = 100;
	magician.intellect = 400;
	//assasin stats
	assasin.vitality = 100;
	assasin.strength = 350;
	assasin.speed = 400;
	assasin.intellect = 150;

	char character;
	std::cout << "what class will you choose? \nA : Brawler,  B : Magician, C : Assasin\n";
	std::cin >> character;
	switch(character) {
	    case'a':
		    brawler.brawl = true;
		    brawler.assin = false;
		    brawler.magic = false;
		case'b':
			magician.brawl = false;
			magician.assin = false;
			magician.magic = true;
		case'c':
			assasin.brawl = false;
			assasin.assin = true;
			assasin.magic = false;
		default:
			std::cout << "unavailable class";

	}
}