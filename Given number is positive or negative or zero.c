#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i<0){
        printf("Given value is negative");
    }
    else if(i==0){
        printf("Given value is zero");
    }
    else{
        printf("Given value is positive");
    }
}