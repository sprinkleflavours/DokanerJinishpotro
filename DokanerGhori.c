#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
{
    printf("Welcome to DokanerGhori.exe, jimbo. \n");
    sleep(2);
    printf("Once you've entered the abyss there's no going back;");
    sleep(3);
    printf("unless of course you close your eyes. \n");
    sleep(3);
    printf("Yet still, if you wish to proceed you may press a key. \n");
    getch();
    unsigned int x;
    x=0;
    printf("%d \n",x);
    LOOP: sleep(1);
    printf("%d \n",++x);
    goto LOOP;
    return 0;
}