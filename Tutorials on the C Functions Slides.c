//1st C functions activity
#include <stdio.h>
int main()
{
    int x1,x2,x3,x4,x5;
    printf("1st Grade: ");
    scanf("%d", &x1);
    printf("2nd Grade: ");
    scanf("%d", &x2);
    printf("3rd Grade: ");
    scanf("%d", &x3);
    printf("4rd Grade: ");
    scanf("%d", &x4);
    printf("5th Grade: ");
    scanf("%d", &x5);
    
    
    int sum;
    sum=x1+x2+x3+x4+x5;
    
    
    
    int ave;
    ave=sum/5;
    
    
    printf("Your average grade is %d", ave);
    
    return 0;
}