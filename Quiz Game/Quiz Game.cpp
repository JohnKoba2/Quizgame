// Quiz Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include "Questions.h"
#include <string>

using namespace std;

int s = 0, f = 0, prize = 0;
char Res;
int t = 0, fques = 00, sques = 00, tques = 00, lques = 00;
int scor = 0, fscor = 0, sscor = 0, tscor = 0, lscor = 0, quit = 0;
string name, fnam = "AAA", snam = "AAA", tnam = "AAA", lnam = "AAA";
bool play = true;

void clearScreen() //prints 100 newlines, effectivly clearing the screen
{
	int n;
	for (n = 0; n < 10; n++)
		printf("\n\n\n\n\n\n\n\n\n\n");
}

void resetScore() //resets all variables to 0
{
	s = 0, f = 0, prize = 0, t = 0, quit = 0;
}

void leaderboard() //prints the leaderboard in a nice pretty box
{
	cout << setprecision(7) << fixed;

	cout << "****************************************************\n"
		<< "**                Leaderboard                     **\n"
		<< "****************************************************\n"
		<< "***  Rank  ***  Name  ***  Questions  *** Prize  ***\n"
	    << "***  1st" << "\t" << fnam << "\t\t" << fques << "\t" << setw(7) << fscor << "  ***\n"
		<< "***  2nd" << "\t" << snam << "\t\t" << sques << "\t" << setw(7) << sscor << "  ***\n"
		<< "***  3rd" << "\t" << tnam << "\t\t" << tques << "\t" << setw(7) << tscor << "  ***\n"
		<< "***  4th" << "\t" << lnam << "\t\t" << lques << "\t" << setw(7) << lscor << "  ***\n"
		<< "****************************************************\n\n\n";
	return;
}

void updateLeaderboard()
{
	cout << "What are your Initials?";
	cin >> name;
	if (prize * 10000 > lscor)
	{

		lnam = name;
		lques = s;
		lscor = prize * 10000;

		if (prize * 10000 > tscor)
		{
			lnam = tnam;
			lques = tques;
			lscor = tscor;

			tnam = name;
			tques = s;
			tscor = prize * 10000;

			if (prize * 10000 > sscor)
			{
				
				tnam = snam;
				tques = sques;
				tscor = sscor;

				snam = name;
				sques = s;
				sscor = prize * 10000;

				if (prize * 10000 > fscor)
				{
					
					snam = fnam;
					sques = fques;
					sscor = fscor;

					fnam = name;
					fques = s;
					fscor = prize * 10000;
				}
			}
		}
	}
	else
		cout << "Sorry you didnt score high enough to make it on the Leaderboard. ";
	leaderboard();
	resetScore();
	cout << "Play again?";
	cin >> Ans;
	if (Ans = 'Y')
		return;
	else
		play = false;

}



void scoring()
{
	cin >> Res;
	Res = toupper(Res);
	if (Res == toupper(Ans))
	{
		s++;
		prize++;
		cout << "Correct! \n";
	}
	/*else if (Res = 'X')
	{
		s += 3, t +=3;
		cout << "Debug override!";
	}*/
	else
	{
		f++;
		prize--;
		cout << "That is incorrect. \n";
	}
	if (prize == 10)
	{
		cout << "Congrats! You win!";			
		updateLeaderboard();
	}

}

void help()
{
	clearScreen();
	cout << "The goal of this game is to get to $1,000,000 by answering questions. \n"
		<< "In round 1 you must anwser 2 questions correctly out of a total of  \n"
		<< "3 questions. This will qualify you for round 2. In round 2 every question \n"
		<< "you anwser correctly will award you $10,000 and every anwser you answer \n"
		<< "incorrectly will removed $10,000. If you sucessfully get to $1,000,000 \n"
		<< "your name will be put on the leaderboard, if you run out of money you lose.\n\n";
}

void showRecord()
{
	cout << "Your current record is " << s << " questions answered correctly.\n"
		<< "Your current prize amount is $" << prize * 10000 << endl;
}



void Round2()
{
	resetScore();
	cout << "****************************************\n"
		<< "**           Challenge Round          **\n"
		<< "****************************************\n";
	while (prize < 10 && quit == 0)
	{
		Questions();
		scoring();
			
		if (prize < 0 )
	{
	cout << "I'm sorry, you have lost.\n\n";
	quit++;
	break;
	}
		cout << "Would you like to continue? Y/N or press R to view your current record.";
		cont();
	}
}


void Round1()
{

	cout << "****************************************\n"
		<< "**            Warm-Up Round           **\n"
		<< "****************************************\n";
	resetScore();
	while (t < 3)
	{
		
		Questions();
		scoring();
		t++;
	}

	if (s > 1)
	{
		cout << "Congratulations you move on to the next round! \n";
		Round2();
	}
	else
	{
		cout << "I'm sorry, you didn't make it to round 2. \n\n\n";
	}
}



	int main()
	{
		while (play)
		{
		char choice;

		// Main Screen where you start the game
		cout << "****************************************\n"
			<< "**             Quiz Game              **\n"
			<< "****************************************\n"
			<< "****************************************\n"
			<< "**             P to Play              **\n"
			<< "**             L for Leaderboard      **\n"
			<< "**             H for Help             **\n"
			<< "**             Q to Quit              **\n"
			<< "****************************************\n"
			<< "****************************************\n";
		cin >> choice;

		choice = toupper(choice);

		switch (choice)
		{
		case 'P':
			resetScore();
			clearScreen();
			Round1();
			break;

		case 'L':
			clearScreen();
			leaderboard();
			break;

		case 'H':
			help();
			break;

		case 'Q':
			play = false;
			break;

		default:
			while (choice != 'P' && choice != 'L' && choice != 'H' && choice != 'Q')
				cout << "Valid choices are only P,L,H or Q."
				<< "Please enter your choice.";
			cin >> choice;

		}

	}

}


	void cont()
	{
		bool run = true;
		while (run)
		{
			cin >> Res;
			Res = toupper(Res);
			switch (Res) {
			case 'Y':
				run = false;
				break;
			case 'N':
				cout << "Thank you for Playing!\n";
				updateLeaderboard();
				resetScore();
				leaderboard();
				quit++;
				run = false;
				break;
			case 'R':
				showRecord();
				cout << "\n\n\n";
				break;
			default:
				cout << "Please enter Y or N";
			}
		}
	}