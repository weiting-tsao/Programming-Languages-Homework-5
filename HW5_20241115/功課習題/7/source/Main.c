#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char *wFace[],
	        const char *wSuit[]);

int main(void)
{
	const char* suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	const char* face[13] =
	{ "Ace", "Deuce", "Three", "Four",
	  "Five", "Six", "Seven", "Eight",
	  "Nine", "Ten", "Jack", "Queen", "King" };

	int deck[4][13] = { 0 }; //設定deck[4][13]初始值都是0，尚未設定順序

	srand(time(0));

	shuffle(deck); //設定deck[4][13]出牌順序
	deal(deck, face, suit); //檢查deck[4][13]出牌順序，由1到52列印花色和大小
	system("pause");
	return 0;
}

void shuffle(int wDeck[][13])
{
	int row;
	int column;
	int card;

	for (card = 1; card <= 52; card++)
	{
		do
		{
			row = rand() % 4; //4個花色
			column = rand() % 13; //13種點數
		} while (wDeck[row][column] != 0); //代表尚未給定順序牌號
		
		wDeck[row][column] = card; //給定順序牌號,由小到大從1~52
	} 
}

void deal(const int wDeck[][13], const char* wFace[],
	const char* wSuit[])
{
	int card;
	int row;
	int column;

	for (card = 1; card <= 52; card++)
	{
		for (row = 0; row <= 3; row++)
		{
			for (column = 0; column <= 12; column++)
			{
				if (wDeck[row][column] == card)
				{
					printf("%5s of %-8s%c", wFace[column], wSuit[row],
						card % 2 == 0 ? '\n' : '\t');
				}
			}
		}
	}
}