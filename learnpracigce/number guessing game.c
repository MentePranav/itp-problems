#include<stdio.h>
#include<stdlib.h>

int  main()
{
    int sec_num = 5;
    int guess;
    int guesslimit = 3;
    int count;
    int outofguess = 0;

    while(guess!=sec_num && outofguess ==0)
    {
        if(count<guesslimit)
        {
            printf("enter a number");
            scanf("%d", &guess);
            count++;
        }
        else{
            outofguess=1;
        }
    }
    if(outofguess == 1){
        printf("you are out of guesses");
    }
    else{
        printf("youwin");
    }
    return 0;
}
