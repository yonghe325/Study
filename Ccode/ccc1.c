#include <stdio.h>
// int a = 10;
//全局变量,可以在本文件外定义
//声明来自外界的变量a
extern int a;
//a在add.c文件中
void test(){
    
    printf("1a=%d\n",a);
}

int main(){
    test();
    {
        printf("2a=%d\n",a);

    }
    scanf("%d",&a);
    printf("3a=%d\n",a);
}