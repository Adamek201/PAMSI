#include "Plansza.h"
#include "Gracz.h"
#include "AI.h"
#include <stdlib.h>
#include<chrono>
#include <thread>

int main()
{
	Board b(3,3);
	Player p1('X');
	AI p2('O');
	

	bool current = true;


	while (1)
	{
		std::cout << "TIC TAC TOE!!!!" << std::endl;
		b.PrintBoard();
		if (current == true)
			p1.move(b);
		else
			p2.move(b);
		system("CLS");
		if (b.CheckWinnerUltimate())
			return 0;
		if (current == true)
			current = false;
		else
			current = true;
	}

}