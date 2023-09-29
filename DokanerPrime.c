#include <stdio.h>
#include <time.h>
int main()
{   
    printf("Welcome to the abyssal depths, jimbo. \n");
    sleep(2);
    printf("This realm is interwoven with the mortal plane through \nmystifying incidencess known as prime numbers. \n");
    sleep(5);
    printf("I sense that you wish to return to your dwelling. \n");
    sleep(2);
    printf("Gratify the abyss of it's greed for primes and the abyss \nshall return the favor. \n");
    int userinpt,i,notprime;
    LOOP: scanf("%d",&userinpt);
    if (userinpt>=2)
    {
        for (i=2;i<userinpt;i++)
        {
        if ( userinpt%i == 0 )
           {
            userinpt=notprime;
           }
        }
    }
    else
    {
        sleep(1);
        printf("The abyss does not favor those who conspire against it, jimbo. \n");
        sleep(2);
        printf("ruminate on your actions and try anew. \n");
        goto LOOP;
    }
    if  (userinpt==notprime)
        {
        sleep(1);
        printf("Hmm... The abyss does not seem pleased. \n");
        sleep(2);
        printf("reflect on your approach and try anew, jimbo. \n");
        goto LOOP;
        }
    else
        {
        sleep(1);
        printf("The abyss has deemed your offering worthy of your freedom. \n");
        sleep(2);
        printf("farewell jimbo, till we meet again.");
        }
    return 0;
}