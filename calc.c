#include <stdio.h>
#include <conio.h>
int add(int a,int b) {
    return a+b;
}
int sub(int a,int b) {
    return a-b;
}
int mult(int a,int b) {
    return a*b;
}
int division(int a,int b) {
    return a/b;
}
int mod(int a,int b) {
    return a%b;
}
int main()
{
    int n,a,b,c;
    do {
        printf("\n--- : Calculator Menu : ---\nEnter 1 for '+'\nEnter 2 for '-'\nEnter 3 for '*'\nEnter 4 for '/'\nEnter 5 for '%'\nEnter 0 for 'Exit'\n");
        printf("\nChoose Your Choice :- ");
        scanf("%d",&n);
        if(n==0 || n>5) {
            printf("\nExiting the program !!!\n");
            break;
        }
        printf("Enter your 1st Number :- ");
        scanf("%d",&a);
        printf("Enter your 2nd Number :- ");
        scanf("%d",&b);
        switch(n) {
            case 1 : printf("\nAddition of Two Numbers (%d + %d) :- %d\n",a,b,add(a,b));           break;
            case 2 : printf("\nSubtraction of Two Numbers (%d - %d) :- %d\n",a,b,sub(a,b));        break;
            case 3 : printf("\nMultiplication of Two Numbers (%d * %d) :- %d\n",a,b,mult(a,b));    break;
            case 4 : if (b != 0)
                        printf("\nDivision of Two Numbers (%d / %d) :- %d\n",a,b,division(a,b));
                    else
                        printf("\nERROR!!! :- Division by zero cannot be done!\n");
                    break;
            case 5 : if (b != 0)
                        printf("\nModulus of Two Numbers (%d % %d) :- %d\n",a,b,mod(a,b));
                    else
                        printf("\nERROR!!! :- Modulus by zero cannot be done!\n");
                    break;
            default : printf("\nExit !!! \n");                                                         break;
        } 
        printf("\nPress 1 for Yes ||| Press 0 for No\nDo You Want to Continue ??? :- ");
        scanf("%d",&c);
    } while(c==1);
    return 0;
}
