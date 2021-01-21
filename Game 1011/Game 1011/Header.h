#include <iostream>
#include <string>
using namespace std;

class Platform
{
private:
	string m_name;
	string m_manufacturer;
public:
	//Constructor
	Platform() // Default constructor
	{
		m_name = "NONE";
		m_manufacturer = "NONE";
	}
	Platform(string name1, string manufacturer1)
	{

		m_name = name1;
		m_manufacturer = manufacturer1;

	}
	// Inline functions
	string getName()
	{
		return m_name;
	}
	string getManufacturer()
	{
		return m_manufacturer;
	}
};

class Game
{
private:

	double* aPtr;
	int arraySize;

	string m_name;
	string m_publisher;
	string m_developer;
public:
	//Constructor
	Game() // Default constructor
	{
		m_name = "NONE";
		m_publisher = "NONE";
		m_developer = "NONE";
	}

	Game(string name2, string publisher2, string developer2)
	{
		m_name = name2;
		m_publisher = publisher2;
		m_developer = developer2;

	}

	Game(int size, double value);
	void print() const;
	void setValue(double value);
	
	// Inline functions
	string getName()
	{
		return m_name;
	}
	string getPublisher()
	{
		return m_publisher;
	}
	string getDeveloper()
	{
		return m_developer;
	}
};

class Achievement
{
private:
	string m_title;
	string m_description;
	string m_score;
public:
	//Constructor
	Achievement() // Default constructor
	{
		m_title = "NONE";
		m_description = "NONE";
		m_score = "NONE";
	}
	Achievement(string title3, string desciption3, string score3)
	{
		m_title = title3;
		m_description = desciption3;
		m_score = score3;

	}
	// Inline functions
	string getTitle()
	{
		return m_title;
	}
	string getDescription()
	{
		return m_description;
	}
	string getScore()
	{
		return m_score;
	}
}; 

Game::Game(int size, double value)
{
	arraySize = size;
	aPtr = new double[arraySize];
	setValue(value);
}

// Print all entries of the array
void Game::print() const
{
	for (size_t i = 0; i < arraySize; i++)
	{
		cout << aPtr[i] << " ";
	}
}

// Sets each entry of the array to the a different value
void Game::setValue(double value)
{
	for (int i = 0; i < 5; ++i)
	{
		aPtr[i] = value;

	}
}