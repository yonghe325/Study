#pragma once
#include <stdio.h>
#include <math.h>
#define row_x 9
#define row_y 9

#define Initvar '#'
//填充地图 的 初始化字符
#define var01 '*'
//雷
#define var02 'o'
//????
#define var03 ' '
//空白字符
#define TheMaxNumber_boom 9
//雷的个数

void menu();
void menu_chose();
void Initialize_map(char arr[row_y][row_x]);
void make_boom(char arr[row_y][row_x]);
void make_number(char arr[row_y][row_x]);
void printf_boom_map(char arr[row_y][row_x]);
void open_whirt(char boomArr[row_y][row_x], char whirtArr[row_y][row_x], int y, int x);
int flags(char boomArr[row_y][row_x], char whirtArr[row_y][row_x]);
void print_flag(char boomArr[row_y][row_x], char whirtArr[row_y][row_x], int y, int x);
int open_move(char boomArr[row_y][row_x], char whirtArr[row_y][row_x]);
void game();


