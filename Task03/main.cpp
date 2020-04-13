/*
1.	Створити структуру Videogame, яка має наступні поля:
-	Назву гри;
-	Назва розробника гри;
-	Жанр гри;
-	Ціна гри;
-	Короткий опис гри;
Реалізувати програму, в якій буде меню з наступними пунктами:
-	Показати всі ігри;
-	Найти гру по назві;
-	Показати всі ігри по розробнику;
-	Показати всі ігри по жанру;
-	Показати всі ігри в діапазоні цін;
-	(Не обов’язково) Додати нову гру;
-	(Не обов’язково) Видалити гру по назві;
Створіть масив на кучі із цих відеоігор. Нехай спочатку буде 5 ігор.
Можете скористатись списковою ініціалізацією.
Якщо ви хочете реалізувати два останні пункти, то спочатку магазин має бути пустий
(вказівник = nullptr).
Кожний пункт меню – це функція.
*/
#include <iostream>

#define SIZE_OTHER_TEXT 100

using namespace std;

struct Videogame
{
	char name[SIZE_OTHER_TEXT] = "";
	char developerName[SIZE_OTHER_TEXT] = "";
	char genre[SIZE_OTHER_TEXT] = "";
	float price = 0.00;
	char description[SIZE_OTHER_TEXT] = "";
};

void ShowMenu();

void ShowAllGame(Videogame* games, const size_t SIZE);

void ShowGame(const Videogame& game);

void FindGame(const Videogame* games, const size_t SIZE, const char* gameName);

void ShowGamesByDeveloper(const Videogame* games, const size_t SIZE, const char* gameDeveloperName);

void ShowGamesByGenre(const Videogame* games, const size_t SIZE, const char* gameGenre);

void ShowGamesByPrice(const Videogame* games, const size_t SIZE, float min, float max);

int main()
{
	Videogame game;
	size_t choice;
	const size_t SIZE = 5;

	Videogame* games = new Videogame[SIZE]
	{
		{ "Game 1", "Dev 1", "Genre 1", 10.10, "Description 1"},
		{ "Game 2", "Dev 2", "Genre 2", 20.20, "Description 2"},
		{ "Game 3", "Dev 3", "Genre 3", 30.30, "Description 3"},
		{ "Game 4", "Dev 4", "Genre 4", 40.40, "Description 4"},
		{ "Game 5", "Dev 5", "Genre 5", 50.50, "Description 5"}
	};

	do
	{
		ShowMenu();
		cout << "Your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			ShowAllGame(games, SIZE);
			break;
		}
		case 2:
		{
			char gameName[SIZE_OTHER_TEXT]{};
			gameName[0] = cin.get();
			cout << "Enter a name: ";
			cin.getline(gameName, SIZE_OTHER_TEXT);

			FindGame(games, SIZE, gameName);

			break;
		}
		case 3:
		{
			char gameDeveloperName[SIZE_OTHER_TEXT]{};
			gameDeveloperName[0] = cin.get();
			cout << "Enter a developer name: ";
			cin.getline(gameDeveloperName, SIZE_OTHER_TEXT);

			ShowGamesByDeveloper(games, SIZE, gameDeveloperName);

			break;
		}
		case 4:
		{
			char gameGenre[SIZE_OTHER_TEXT]{};
			gameGenre[0] = cin.get();
			cout << "Enter a genre game: ";
			cin.getline(gameGenre, SIZE_OTHER_TEXT);

			ShowGamesByGenre(games, SIZE, gameGenre);

			break;
		}
		case 5:
		{
			float min, max;
			do
			{
				cout << "Enter min and max prices: ";
				cin >> min >> max;
				if (min < 0 || max < 0)
					cout << "Incorrect prices.\n";
			} while (min < 0 || max < 0);

			ShowGamesByPrice(games, SIZE, min, max);

			break;
		}
		case 0:
		{
			cout << "Goodbye!\n";
			break;
		}
		default:
		{
			cout << "Incorrect choice. Goodbye\n";
			return 0;
		}
		}
	} while (choice != 0);

	delete[] games;
	games = nullptr;

	system("pause");
	return 0;
}

void ShowMenu()
{
	cout << "1 - Show game list                 \n";
	cout << "2 - Find game by name              \n";
	cout << "3 - Show games by developer        \n";
	cout << "4 - Show games by genre            \n";
	cout << "5 - Show games by prices           \n";
	cout << "0 - Quit                           \n";
}

void ShowAllGame(Videogame* games, const size_t SIZE)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "Name \t\t-\t"		<< games[i].name			<< endl;
		cout << "Developer \t-\t"	<< games[i].developerName	<< endl;
		cout << "Genre \t\t-\t"		<< games[i].genre			<< endl;
		cout << "Price \t\t-\t"		<< games[i].price			<< endl;
		cout << "Description \t-\t" << games[i].description		<< endl;
		cout << "===================================================\n";
	}
}

void ShowGame(const Videogame& game)
{
	cout << "Name:        " << game.name			<< endl;
	cout << "Developer:   " << game.developerName	<< endl;
	cout << "Genre:       " << game.genre			<< endl;
	cout << "Price:       " << game.price			<< endl;
	cout << "Description: " << game.description		<< endl;
}

void FindGame(const Videogame* games, const size_t SIZE, const char* gameName)
{
	bool isFound = false;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (!strcmp(games[i].name, gameName))
		{
			isFound = true;
			cout << "Information:\n";
			ShowGame(games[i]);
		}
	}

	if (!isFound)
		cout << "List doesn't include this name or incorrect name.\n";
}

void ShowGamesByDeveloper(const Videogame* games, const size_t SIZE, const char* gameDeveloperName)
{
	bool isFound = false;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (!strcmp(games[i].developerName, gameDeveloperName))
		{
			isFound = true;
			cout << "Information:\n";
			ShowGame(games[i]);
		}
	}

	if (!isFound)
		cout << "List doesn't include this developer or incorrect name.\n";
}

void ShowGamesByGenre(const Videogame* games, const size_t SIZE, const char* gameGenre)
{
	bool isFound = false;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (!strcmp(games[i].genre, gameGenre))
		{
			isFound = true;
			cout << "Information:\n";
			ShowGame(games[i]);
		}
	}

	if (!isFound)
		cout << "List doesn't include this genre or incorrect name.\n";
}

void ShowGamesByPrice(const Videogame* games, const size_t SIZE, float min, float max)
{
	if (min > max)
		swap(min, max);

	bool isFound = false;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (games[i].price >= min && games[i].price <= max)
		{
			isFound = true;
			cout << "Information:\n";
			ShowGame(games[i]);
		}
	}

	if (!isFound)
		cout << "List doesn't include games with prices in your diapasone.\n";
}