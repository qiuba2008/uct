#include "player.h"
#include "utils.h"

#include <iostream>

int main(int argc, char *argv[]) {
	std::cout.precision(2);
	std::cout.setf(std::ios::fixed,std::ios::floatfield);
    srand(time(NULL));

    Board *board=choose_game();

	Player *player_a=new PlayerBot(PLAYER_1,1.5);
	Player *player_b=new PlayerBot(PLAYER_2,1.5,1000);

	play_game(player_a,player_b,board);

    delete board;
	delete player_a;
	delete player_b;

	return 0;
}
