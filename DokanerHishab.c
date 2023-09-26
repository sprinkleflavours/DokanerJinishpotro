#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
{
    printf("Welcome to DokanerHishab.exe, jimbo. \n");
    sleep(1);
    printf("press any key to proceed. \n");
    getch();
    sleep(2);
    printf("?? \n");
    sleep(2);
    printf("...something is awry \n");
    sleep(2);
    printf("Hmm.. \n");
    sleep(2);
    printf("It seems that in order to become the abyss you must ENTER the abyss first. \n");
    int userinpt;
    do {
        userinpt = getch();
    } while (userinpt != 13);
    printf("Well done, the abyss has deemed you worthy of the sacred ritual. \n");
    sleep(2);
    int x,y,z;
    LOOP:printf("enter prothom maal er daam: ");
    scanf("%d",&x);
    printf("enter ditiyo maal er daam: ");
    scanf("%d",&y);
    z=x+y;
    printf("teka dite ko %d tk. \n",z);
    sleep(2);
    printf("Only dare to ENTER the abyss again if you truly must. \n");
    do {
        userinpt = getch();
    } while (userinpt != 13);
    goto LOOP;
    return 0;
}