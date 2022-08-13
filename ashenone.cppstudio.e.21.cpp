#include <iostream>

using std::cout; using std::cin;
using std::endl;

int getPlayerChoice() 
{
	cout << "Your answer: ";
	int choice;
	cin >> choice;
	return choice;
}

int main() {
	
	cout << " Dark Souls III Fan Test\n True Babadzaki - 30 points\n Ashen One - 25 points\n Watchers Enjoyer - 20 points\n Regular Player - 15 points\n Katana Gay - 10 points\n First Time, Huh? - 5 points\n Artorias - 0 points" << endl;

	int point_counter{ 0 };

	cout << "\n(Enter a number of the answer)\n";

	cout << "\n1) How many endings does the game have?\n 1. 1\n 2. 2\n 3. 3" << endl;
	int choice1{ getPlayerChoice() };

	if (choice1 != 3) { cout << "Wrong. Correct answer is 3." << endl; }
	else 
	{ 
		cout << "Correct!" << endl; 
		point_counter += 5;
	}


	cout << "\n2) Whats the name of the final boss?\n 1. Soul of Cinder\n 2. Yhorm, the Cinder\n 3. Cinderella" << endl;
	int choice2{ getPlayerChoice() };

	if (choice2 != 1) { cout << "Wrong. Correct answer is 1." << endl; }
	else 
	{ 
		cout << "Correct!" << endl; 
		point_counter += 5;
	}

	cout << "\n3) Who is the founder of Warrior of Sunlight covenant?\n 1. Crystal Sage\n 2. Yuria of Londor\n 3. Soler from Astora" << endl;
	int choice3{ getPlayerChoice() };

	if (choice3 != 3) { cout << "Wrong. Correct answer is 3." << endl; }
	else 
	{
		cout << "Correct!" << endl;
		point_counter += 5;
	}

	cout << "\n4) What is the maximum upgrade for weapons?\n 1. +7\n 2. +10\n 3. +15" << endl;
	int choice4{ getPlayerChoice() };

	if (choice4 != 2) { cout << "Wrong. Correct answer is 2." << endl; }
	else 
	{
		cout << "Correct!" << endl;
		point_counter += 5;
	}

	cout << "\n5) Which boss is redundant here?\n 1. Wolnir\n 2. Ludex Gundyr\n 3. Orphan Cos" << endl;
	int choice5{ getPlayerChoice() };

	if (choice5 != 3) { cout << "Wrong. Correct answer is 3." << endl; }
	else 
	{
		cout << "Correct!" << endl;
		point_counter += 5;
	}

	cout << "\n6) Who is the creator of the game?\n 1. Babadzaki Kushiro\n 2. Hidetaka Miyazaki\n 3. Hirokusi Maroyama" << endl;
	int choice6{ getPlayerChoice() };

	if (choice6 != 2) { cout << "Wrong. Correct answer is 2." << endl; }
	else
	{
		cout << "Correct!" << endl;
		point_counter += 5;
	}

	cout << "\nYour score: " << point_counter << endl;

	switch (point_counter) {
	case 0:
		cout << "\nYou are Artorias, the true noob and observer of Abyss.\n";
		break;
	case 5:
		cout << "\nPlaying for the first time and trying to guess? Heh, good luck and have a nice walkthrough, ashen one.\n";
		break;
	case 10:
		cout << "\nWelcome to the club buddy, throw your katana to the trash and go complete the game once more!\n";
		break;
	case 15:
		cout << "\nWell Done, half is half of the way to true Ashen One, you have potential!\n";
		break;
	case 20:
		cout << "\nVery nice, ashen one. Soler is proud you. By the way, Abyss Watchers are cool :D\n";
		break;
	case 25:
		cout << "\nYou are truly Ashen One, be proud of it and go have some drink, you did great!\n";
		break;
	case 30:
		cout << "\nWhy are you even doing this, Babadzaki? Go fix Elden Ring, I can't play it with lags like that! And fix 144hz screen tearing, for fuck sake!\n";
		break;
	default:
		cout << "\nError\n";
	}
	
	system("pause");

	return 0;
}