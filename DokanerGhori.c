#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
{
    printf("Welcome to DokanerGhori.exe, jimbo. \n");
    sleep(2);
    printf("Once you let the abyss loose it shall feed on the continuity of time... ");
    sleep(3);
    printf("unless of course you choose to interfere. \n");
    sleep(3);
    printf("Yet still, if you wish to proceed you may press a key. \n");
    getch();
    unsigned int x;
    x=0;
    printf("%d \n",x);
    LOOP: do { sleep(1);
    printf("%d \n",++x);
    } while (!kbhit());
    sleep(1);
    printf("The abyss has returned to it's state of slumber. \n");
    sleep (2);
    printf("do you wish to wake it again? \n");
    getch();
    getch();
    goto LOOP;
    return 0;
}