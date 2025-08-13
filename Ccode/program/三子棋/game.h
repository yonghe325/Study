#pragma once
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define the_x 3
//列
#define the_y 3
//行
//定义地图大小
#define play_num 3
//几子棋

void menu();
//菜单
void Initialize_map(char arr[the_y][the_x], int y, int x);
////初始化棋盘
void printf_map(char arr[the_y][the_x], int y, int x);
//打印棋盘数据

int playermove(char arr[the_y][the_x], int y, int x); 
int computermove(char arr[the_y][the_x], int y, int x);

int Judge(char arr[the_y][the_x], int y, int x);
