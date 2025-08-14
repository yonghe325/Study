#include "game.h"

int main()
{
	int win_sum_player = ((int)'#') * play_num;
	int win_sum_computer = ((int)'*')* play_num;
	printf("win_sum_player = %d\n", win_sum_player);
	printf("win_sum_computer = %d\n", win_sum_computer);
	

	srand((unsigned)time(NULL));
	int move_x = rand() ;
	printf("move_x =%d\n", move_x);



	int sum_y = 0;
	int sum_x = 0;
	int sum_xy = 0;

	//char game_map[the_y][the_x] = { '#','#','#','#','#','#','#','#','#'};
	char game_map[the_y][the_x] = { '#','#','#','0','0','0','0','0','0'};
	
	//char game_map[the_y][the_x] = { '0','0','0','#','#','#','0','0','0'};
	//char game_map[the_y][the_x] = { '0','0','0','0','0','0','#','#','#'};
	//char game_map[the_y][the_x] = { '#','0','0','#','0','0','#','0','0'};
	
	//char game_map[the_y][the_x] = { '#','0','0','0','#','0','0','0','#'};
	for (int i = 0; i < the_y; i++)
	{
		for (int j = 0; j < the_x; j++)
		{
			sum_y += game_map[i][j];

			printf("sum_y= %d\n",sum_y);
		}
		if ((sum_y == win_sum_player) || (sum_y == win_sum_computer))
		{
			return 1;
		}
		printf("sum_y%d= %d\n",i, sum_y);
		sum_y = 0;
	}


	return 0;
}