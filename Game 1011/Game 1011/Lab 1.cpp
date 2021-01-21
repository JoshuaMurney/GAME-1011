#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
	// Bool for do while loops
	bool again = false;
	
	// Variables for inputs
	string nameInput;
	string manufacturerInput;
	string gameNameInput;
	string publisherInput;
	string developerInput;
	string titleInput;
	string descriptionInput;
	string scoreInput;
	int answer;
	int platformAnswer;

	// Arrays
	const int p = 100;
	string platformArray[p];
	string gameArray[5];
	string firstPlatformArray[5];
	string secondPlatformArray[5];

	// Pointers
	Platform* pPlatform = nullptr;
	Game* pGame = nullptr;
	Achievement* pAchievement = nullptr;

	cout << "Welcome to the Achievement Creator!" << endl;
	cout << "************************************" << endl;
	do
	{
	cout << "Please select a creation option: 1 = Platform, 2 = Game. 3 = Achievement" << endl;
	cin >> answer;
	switch (answer)
	{
	case 1:
		cout << "\nPlease enter the Platform information:" << endl;
		cout << "Name:" << endl;
		cin >> nameInput;
		cout << "Manufacturer:" << endl;
		cin >> manufacturerInput;
		break;
	case 2:
		cout << "\nPlease enter the Game information:" << endl;
		cout << "Name:" << endl;
		cin >> gameNameInput;
		cout << "Publisher:" << endl;
		cin >> publisherInput;
		cout << "Developer:" << endl;
		cin >> developerInput;
		cout << "\nWhich platform does this game belong to?\n" << "1 = " << platformArray[1] << ", 2 = " << platformArray[2] << endl;
		cin >> platformAnswer;
		if (platformAnswer == 1)
		{
			gameNameInput == firstPlatformArray[1];
		}
		if (platformAnswer == 2)
		{
			gameNameInput == secondPlatformArray[1];
		}
		break;
	case 3:
		cout << "\nPlease enter the Achievement information:" << endl;
		cout << "Title:" << endl;
		cin >> titleInput;
		cout << "Description:" << endl;
		cin >> descriptionInput;
		cout << "Score Value:" << endl;
		cin >> scoreInput;
		break;
	}
		
	int finalAnswer;
	cout << "\nWould you like to create another item?\n1 = Yes\n2 = No" << endl;
	cin >> finalAnswer;
	switch (finalAnswer)
	{
	case 1:
		cout << "\n" << endl;
		again = true;
		break;
	case 2:
		cout << "\n" << endl;
		again = false;
		break;
	}
	} while (again == true); // Infinite loop until we break out

	// Using pointers to allocate information
	pPlatform = new Platform(nameInput, manufacturerInput);
	pGame = new Game(gameNameInput, publisherInput, developerInput);
	pAchievement = new Achievement(titleInput, descriptionInput, scoreInput);

	// Return information from classes
	cout << "\nPlatform: " << endl;
	cout << " Name - " << pPlatform->getName() << "\n Manufacturer - " << pPlatform->getManufacturer() <<  endl;
	cout << "\nGames: " << endl;
	cout << " Name - " << pGame->getName() << "\n Publisher - " << pGame->getPublisher() << "\n Developer - " << pGame ->getDeveloper() << endl;
	cout << "\nAchievements: " << endl;
	cout << " Title - " << pAchievement->getTitle() << "\n Description - " << pAchievement->getDescription() << "\n Score Value - " << pAchievement->getScore() << endl;
	delete pPlatform;
	pPlatform = nullptr;
	delete pGame;
	pGame = nullptr;
	delete pAchievement;
	pAchievement = nullptr;


	return 0;
}