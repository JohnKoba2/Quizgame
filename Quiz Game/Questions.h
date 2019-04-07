#pragma once
#include <iostream>
#include <iomanip>

int Q;
char Ans;
using namespace std;

void Questions()
{
	srand(time(NULL));
	Q = rand() % 21 + 1;
	switch (Q)
	{
	case 1:cout << "In the second - generation Pokemon games, which Pokemon can you start with ? \n"
		<< "A. Bulbasaur, Charmander, and Squirtle \n"
		<< "B. Chikorita, Cyndaquil, and Totodile \n"
		<< "C. Treedy, Grilpas, and Kanew \n"
		<< "D.Grassy, Firey, and Watery \n";		
		Ans = 'B';
		break;

	case 2: cout << "Which one of these is not a Pokemon ? \n"
		<< "A. Pikachu \n"
		<< "B. Gardevoir \n"
		<< "C. Jura \n"
		<< "D. Jigglypuff \n";		
		Ans = 'C';
		break;


	case 3: cout << "What does the Pokemon ability Levitate do ? \n"
		<< "A. It makes the Pokemon with Levitate faster due to flying capabilities. \n"
		<< "B. It helps you avoid wild Pokemon because you can float over them.\n"
		<< "C. A Pokemon with Levitate is not affected by ground - type moves regardless of the Pokemon with the ability.\n"
		<< "D. Levitate makes the moves ""Fly"" and ""Bounce"" stronger due to the ability to go to higher altitudes. \n";
		Ans = 'C';
		break;


	case 4: cout << "Given that a Diglett and a Raichu have the exact same stats and ability,\n who will do more damage to identical enemy Pokemon when using Dig ? \n"
		<< "A. Raichu \n"
		<< "B. Diglett \n"
		<< "C. Both of them will do the same amount of damage. \n"
		<< "D. Raichu can't learn dig. \n";
		Ans = 'B';
		break;


	case 5:	cout << "What does a Pokemon's nature do? \n"
		<< "A. The nature of a Pokemon increases one stat by 10 % and decreases another by 10 % . \n"
		<< "B. It will affect the behaviour of the Pokemon in the game. \n"
		<< "C. It will have an effect on the Pokemon's happiness. \n"
		<< "D. Nothing.It is just a cool thing to have. \n";
		Ans = 'A';
		break;

	case 6: cout << "The Pokemon Missingno. can be found in every Pokemon game through some sort of glitch. \n Missingno. is most infamous in Pokemon Red, often called, \n""the glitch Pokemon who will completely mess up your game."" Which one of these Missingno. myths is untrue ? \n"
		<< "A. Missingno. can only be found by glitch or cheat. \n"
		<< "B. Missingno. can look like a ghost,  a strange Kabutops, or a glitch(In Pokemon R / B) \n"
		<< "C. Missingno. will glitch up your save data and possibly the whole cartridge when caught. \n"
		<< "D. Missingno. is not the only glitch Pokemon. \n";
		Ans = 'C';
		break;

	case 7: cout << "In the Second generation games, which Pokemon is in the middle of Professor Elm's Table? \n"
		<< "A. Chikorita \n"
		<< "B. Bayleef \n"
		<< "C. Totodile \n"
		<< "D. Cyndaquil \n";
		Ans = 'C';
		break;

	case 8: cout << "Wooper is introduced in which Pokemon generation? \n"
		<< "A. 1st \n"
		<< "B. 2nd \n"
		<< "C. 3rd \n"
		<< "D. 4th \n";
		Ans = 'B';
		break;

	case 9: cout << "Which Pokemon does Oak send out for an example? \n"
		<< "A. Nidorina \n"
		<< "B. Gengar \n"
		<< "C. Nidoran(Male) \n"
		<< "D. Nidoran(Female) \n";
		Ans = 'C';
		break;

	case 10: cout << "Which two Pokemon are the first that you see in Red and Blue, if you don't press the A button before the cutscene ends? \n"
		<< "A. Gengar, Bulbasaur \n"
		<< "B. Charmander, Squirtle \n"
		<< "C. Treey, Pigges \n"
		<< "D. Gengar, Nidorina \n";
		Ans = 'D';
		break;

	case 11: cout << "Which  Pokemon does Pikachu evolve into? \n"
		<< "A. Jolteon \n"
		<< "B. Meowstic \n"
		<< "C. Electrive \n"
		<< "D. Raichu \n";
		Ans = 'D';
		break;

	case 12: cout << "Which is the most effective pokeball in the game? \n"
		<< "A. Great Ball \n"
		<< "B. Master Ball \n"
		<< "C. Ultra Ball \n"
		<< "D. Timer Ball \n";
		Ans = 'B';
		break;

	case 13: cout << "How many Gym Badges must a trainer collect before challenging the Elite Four? \n"
		<< "A. Six \n"
		<< "B. Seven \n"
		<< "C. Eight \n"
		<< "D. Nine \n";
		Ans = 'C';
		break;

	case 14: cout << "What's the device trainers use to keep a record of their Pokemon encounters? \n"
		<< "A. Pokecounter \n"
		<< "B. Pokedex \n"
		<< "C. Pokefinder \n"
		<< "D. Pokephone \n";
		Ans = 'B';
		break;

	case 15: cout << "If you need to buy supplies in the Pokemon world, where do you go? \n"
		<< "A. Pokemon Center \n"
		<< "B. Gym \n"
		<< "C. Poke Mart \n"
		<< "D. Poke Dep \n";
		Ans = 'C';
		break;

	case 16: cout << "If you need to revive your fainted Pokemon to full health, where do you go? \n"
		<< "A. Pokemon Center \n"
		<< "B. Mount Fuji \n"
		<< "C. Pokemon Mansion \n"
		<< "D. Gym \n";
		Ans = 'A';
		break;

	case 17: cout << "What type of attacks are Normal type Pokemon immune to? \n"
		<< "A. Fighting\n"
		<< "B. Ghost \n"
		<< "C. Dark \n"
		<< "D. Fire \n";
		Ans = 'B';
		break;

	case 18: cout << "Which of these is NOT a potential status ailment in a Pokemon battle? \n"
		<< "A. Paralysis \n"
		<< "B. Vertigo \n"
		<< "C. Burn \n"
		<< "D. Sleep \n";
		Ans = 'B';
		break;

	case 19: cout << "Which of these is NOT a potential status ailment in a Pokemon battle? \n"
		<< "A. Paralysis \n"
		<< "B. Vertigo \n"
		<< "C. Burn \n"
		<< "D. Sleep \n";
		Ans = 'B';
		break;

	case 20: cout << "If you're facing a Magmar in battle, which of these attacks should your Pokemon use?\n"
		<< "A. Hyper Beam \n"
		<< "B. Solar Beam \n"
		<< "C. Earthquake \n"
		<< "D. Splash \n";
		Ans = 'C';
		break;

	case 21: cout << "What type of move is Hyper Beam?\n"
		<< "A. Psychic \n"
		<< "B. Normal \n"
		<< "C. Grass \n"
		<< "D. Fairy \n";
		Ans = 'B';
		break;
	}


}
