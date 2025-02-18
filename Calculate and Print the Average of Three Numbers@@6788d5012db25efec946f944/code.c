#include<stdio.h>
int main(){
    int num1,num2,num3;
    float average;
    scanf("%d%d%d",num1,num2,num3);
    average=(float)(num1+num2+num3)/3;
    printf("Average: %.2f\n",average);
    return 0;
}