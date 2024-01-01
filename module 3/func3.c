// // WAP to find reverse of string using recursion
// #include <stdio.h>
// char str(char name[]);
// int main()
// {
//     char moin[20];
//     gets(moin);
//     puts(moin);
//     str(moin);

// }
// char str(char name[])
// {
//     int i;
//     char rev[20];
//     for(i=)
// }
#include <stdio.h>
void moin();
int main() {
    printf("Enter a sentence: ");
    moin();
    return 0;
}

void moin() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        moin();
        printf("%c", c);
    }
}