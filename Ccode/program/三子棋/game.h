#pragma once
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define the_x 3
//��
#define the_y 3
//��
//�����ͼ��С
#define play_num 3
//������

void menu();
//�˵�
void Initialize_map(char arr[the_y][the_x], int y, int x);
////��ʼ������
void printf_map(char arr[the_y][the_x], int y, int x);
//��ӡ��������

int playermove(char arr[the_y][the_x], int y, int x); 
int computermove(char arr[the_y][the_x], int y, int x);

int Judge(char arr[the_y][the_x], int y, int x);
