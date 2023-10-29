//Betting game
//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int cash = 100;

void Play(int bet);


int main()
{
    int bet;
    while(cash > 0)
    {
        
        printf("What's your bet?$");
        scanf("%d", &bet);
        if(bet == 0 || bet > cash) break;

        Play(bet);
    }
    return 0;
}

void Play(int bet)
{
    char *C = (char*)malloc(3*sizeof(char));
    C[0] = 'J'; C[1] = 'Q'; C[2] = 'K';
    printf("Suffling...\n");
    srand(time(NULL));//产生随机数
    /*
    这行代码的作用是初始化随机数生成器。
    srand函数接受一个参数time(NULL)，它是一个时间戳，用于生成随机数。
    NULL是一个空指针，表示不使用任何特定时间戳，而是使用当前时间戳。
    通过使用当前时间戳，每次运行程序时生成的随机数都是不同的。

    随机数生成器在许多程序中非常重要，例如在模拟随机行为时：
    srand函数通常在程序的入口处调用，以确保每次运行程序时生成的随机数都是不同的。
    */

    int i;
    for(i=0; i<5; i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp;//swap

    }

    int playersGuess;
    printf("WHat's the position of queen -1, 2 or 3?");
    scanf("%d", &playersGuess);
    if(C[playersGuess - 1] == 'Q'){
        cash += 3*bet;
        printf("You win !\nResult = %c %c %c\nTotal Cash = %d", C[0], C[1], C[2], cash);

    }else{
        cash -= bet;
        printf("You loose !\nResult = %c %c %c\nTotal Cash = %d", C[0], C[1], C[2], cash);
    }

    free(C);
}
