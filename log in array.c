#include<stdio.h>

int main()
{
    //an array of 3 rows and 2 columns
    int cred[3][2]= {{1927,2002},{1028,5555},{1234,5678}};


    int num,pin,temp[3][2];

    printf("ENTER ID NUMBER: ");
    scanf("%d", &num);
    printf("ENTER PIN: ");
    scanf("%d", &pin);


    if(num==cred[0][0]&pin==cred[0][1])
        printf("\nSuccessful Log in\nID #: %d",num);

    if(num==cred[1][0]&pin==cred[1][1])
        printf("\nSuccessful Log in\nID #: %d",num);

    if(num==cred[2][0]&pin==cred[2][1])
        printf("\nSuccessful Log in \nID #: %d",num);

    else {
        printf("\nInvalid ID/PIN");
    }




    return 0;
}