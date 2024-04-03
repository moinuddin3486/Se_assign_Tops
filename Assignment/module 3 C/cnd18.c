#include <stdio.h>
int main()
{
    int cprice,sprice,profit;
    printf("Enter your cost price :");
    scanf("%d",&cprice);
    printf("Enter your selling price :");
    scanf("%d",&sprice);
    if(sprice>cprice)
    {
        profit=sprice-cprice;
        printf("Your profit is = %d",profit);
    }
    else if(cprice>sprice)
    {
        profit=sprice-cprice;
        {
            printf("Your loss is = %d",profit);
        }

    }
    else
    {
        printf(" No profit and No loss!!");
    }

}