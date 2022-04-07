#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;

    do{
       height = get_int("what is the height for the pyramid?(1-8)\n");
    }
    while(height <1 || height > 8);//看了很多人的代码，发现他们都是这样：while( height >=1 || height <= 8) 我的通过不了


    for(int i = 0;i<height;i++)
    {
        for(int j = height-i-1;j > 0;j--)
            {
                printf(" ");
            }

        for(int k = 0 ;k <= i;k++)
            {
                printf("#");
            }
        printf("\n");
    }
}