#include <stdio.h>
#include <stdlib.h>

//1. 인풋에 연결한 순서 기억 
//2. 연결 해제시 마지막으로 연결한 인풋을 아웃풋으로 설정
//3. 기본 아웃풋값은 1번 인풋

int num[8] = {0};
int input = 0;
int output = 0;
char option[10] = {0};

int main()
{   
    scan();
    screen();
    main();
    return 0;
}

int scan()
{   
    scanf("%s", &option);
    if(option == "input") {
        scanf("%d", &input);
        num[input] = 1;
    }
    else if(option == "output") {
        scanf("%d", &output);
        num[output] = 0;
    }
}

int screen()
{
    printf("--------------------------------------\n");
    printf(" out  %d  %d  %d  %d  %d  %d  %d  %d  \n",
    num[0], num[1], num[2], num[3], num[4], num[5], num[6], num[7]);
    printf("  %d   %d  %d  %d  %d  %d  %d  %d  %d \n",
    output, num[0], num[1], num[2], num[3], num[4], num[5], num[6], num[7]);
    printf("--------------------------------------\n");
}