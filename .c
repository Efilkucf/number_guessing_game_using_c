#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100 + 1;
    do{
    printf("Enter a number between 1-100 number\n");
    scanf("%d",&guess);
    if(number>guess){
        printf("greater the number\n");
    }
    else if(number<guess){
        printf("lower the number\n");
    }
    else{
        printf("The number of guesses taken : %d\n",nguesses);
        break;
    }
    nguesses++;
    }
    while(guess!=nguesses);

    return 0;
}
