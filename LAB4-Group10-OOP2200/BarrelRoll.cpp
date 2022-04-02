#include "BarrelRoll.h"
#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>	// time 
using namespace std;

void RandomRoll()
{
	int live = 3;
	int laugh = 6;
	int love = 7;
	bool youShallNotPass = false;
	//int* rollOrder = nullptr;
	int* rollRandom = nullptr;
	//rollOrder = new int[num];
	
	int matchCount = 0;
	string generatedRoll;
	string match;
	int num;
	while (youShallNotPass == false)
	{
		cout << "Please enter a 3 or 6 or 7\n";
		cin >> num;

		if (live == num || laugh == num || love == num)
		{
			srand(time(NULL));

			rollRandom = new int[num];
			for (int i = 0; i <= num - 1; i++)
			{
				//rollOrder[i] = i;
				rollRandom[i] = rand() % num + 1;

			}
			for (int i = 0; i <= num - 1; i++)
			{
				generatedRoll += "|" + to_string(rollRandom[i]);

				for (int x = i + 1; x <= num - 1; x++)
				{
					if (rollRandom[x] == rollRandom[i])
					{
						match += "|" + to_string(rollRandom[x]);
						match += "|" + to_string(rollRandom[x]);
						matchCount++;
						break;
					}
				}
			}

			display(generatedRoll, match, matchCount);
			
		}
		else
		{
			continue;
		}

		delete[] rollRandom;
		youShallNotPass = true;
	}


	
}


void display(string one, string two, int count)
{
	
	if (count >= 3)
	{
		cout << "\nYour generated string is " << one;
		cout << "\nThese are your repeats" << two;
		cout << "\nBetter luck next time";
	}
	
	else if (count >= 1)
	{
		cout << "\nYour generated string is " << one;
		cout << "\nThese are your repeats" << two;
		cout << "\nSecond Prize winner, A number is repeated twice";
	}
	else if (count >= 0)
	{
		cout << "\nYour generated string is " << one;

		cout << "\nFirst Prize winner, All numbers are unique";
	}
}