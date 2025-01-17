#pragma once
#include <SFML\Graphics.hpp>

#define ROWS 20
#define COLS 15
#define OFFSET_X 10
#define OFFSET_Y 3
struct block {
	char value;
	char color;
	float timer;
};
class Board
{
public:

	block board[ROWS][COLS];

	Board(sf::RenderWindow &window);

	~Board();
	void init();
	bool gameOver();
	void clearLine(int &score);
	void merge();
	void Draw(sf::RenderWindow &window, sf::Vector3i nextPiece, sf::Vector3i heldPiece, char pieces[7][4][5][5]);

	int firstRow;

};

