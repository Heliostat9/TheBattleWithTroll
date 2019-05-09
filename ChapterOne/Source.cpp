//Battle with the troll

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() 
{
	short healthEnemy = 200, healthHero = 100, defenseHero = 50, damageHero = 50, damageEnemy = 25, arrowDamage = 25;
	float bowTension = 0, swordTension = 0;
	cout << "You walk through the forest, when you notice a troll."<< endl;
	cout << "You decide to kill the troll with a bow" << endl;
	cout << "Pull on bowstring" << endl;
	cout << "Choose from 0.1 - 1 bowstring tension: ";
	cin >> bowTension;
	cout << "You did " << arrowDamage * bowTension << " damage" << endl;
	cout << "Troll has " << healthEnemy - (arrowDamage * bowTension) << " health";
	cout << "The troll noticed you and rushes to you" << endl;
	cout << "You take another arrow" << endl;
	cout << "Choose from 0.1 - 1 bowstring tension: ";
	cin >> bowTension;
	cout << "You did " << arrowDamage * bowTension << " damage" << endl;
	cout << "Troll has " << healthEnemy - (arrowDamage * bowTension) << " health";
	cout << "The troll hits you" << endl;
	cout << "You flew a few meters" << endl;
	cout << "Your health " << healthHero - damageEnemy;
	cout << "Tighten the bow again" << endl;
	cout << "You did " << arrowDamage * bowTension << " damage" << endl;
	cout << "Troll has " << healthEnemy - (arrowDamage * bowTension) << " health";
	cout << "You hit the troll in the eye, he is bleeding, its time to fight in the melee" << endl;
	cout << "You draw a swotd and run on the troll" << endl;
	cout << "You swing own sword" << endl;
	cout << "Choose from 0.1 - 1 swing of the sword: ";
	cin >> swordTension;
	cout << "You did " << damageHero * swordTension << " damage" << endl;
	cout << "Troll has " << healthEnemy - (damageHero * swordTension) << " health";
	cout << "You cut off the trolls hand" << endl;
	cout << "The troll picks up a boudler and throws it at you" << endl;
	cout << "Stone condemns you" << endl;
	cout << "Your health " << healthHero - damageEnemy;
	cout << "The troll falls from blood loss but it comes to you" << endl;
	cout << "You take an arrow and aim at the head" << endl;
	cout << "Choose from 0.1 - 1 bowstring tension: ";
	cin >> bowTension;
	cout << "Troll has " << healthEnemy - healthEnemy << " health";
	cout << "\nYou hit the troll in the head" << endl;
	cout << "The troll fell and does not show signs of life" << endl;
	cout << "Although you won but you did not have long, the stone squeezes the organs, you breathe heavily and you choking" << endl;
	cout << "After five minutes you die" << endl;
	cout << "\n\nGame Over!" << endl;
	return 0;
}