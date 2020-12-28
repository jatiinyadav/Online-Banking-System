#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int list();
void transfer();
void deposit();
void last();
void withdraw();
void checkdetail();

int total_amount = 2500, Amount, Amo, Tr, total_deposit = 0, total_withdraw = 0;
int totalTr = 0;
int Acc;
char a[50];
void main()
{
    printf("Enter your name:\n ");
    gets(a);
    printf("Enter your account number:\n ");
    scanf("%d", &Acc);
    while (1)
    {
        switch (list())
        {
        case 1:
            deposite();
            total_deposit += Amount;
            break;
        case 2:
            withdraw();
            if (Amo <= total_amount)
                total_withdraw += Amo;
            break;
        case 3:
            transfer();
            if (Tr <= total_amount)
                totalTr += Tr;
            break;
        case 4:
            checkdetail();
            break;
        case 5:
            last();
            getch();
            exit(0);
        default:
            printf("\n Invalid ID choice");
        } //end of switch
        getch();
    } //end of while
}
int list()
{
    int ch;
    printf("\n 1. Diposit amount");
    printf("\n 2. Withdraw amount");
    printf("\n 3. Transfer amount");
    printf("\n 4. Check details");
    printf("\n 5. Exit");
    printf("\n Enter you choice: ");
    scanf("%d", &ch);
    return (ch);
}
void deposite()
{
    printf("\n Enter the amount you want to diposit: ");
    scanf("%d", &Amount);
    total_amount += Amount;
}
void withdraw()
{
    printf("\n Enter the amount you want to withdraw: ");
    scanf("%d", &Amo);
    if (Amo <= total_amount)
    {
        total_amount = Amo;
    }
    else
    {
        printf("\n Less amount withdraw is not possible: ");
    }
}
void transfer()
{
    printf("\n  Enter the amount you want to transfer: ");
    scanf("%d", &Tr);
    if (Tr <= total_amount)
    {
        total_amount -= Tr;
    }
    else
    {
        printf("\n Less amount is not possible: ");
    }
}
void checkdetail()
{
    printf("\n Total amount= %d", total_amount);
    printf("\n Total deposite amount= %d", total_deposit);
    printf("\n Total withdraw amount= %d", total_withdraw);
    printf("\n Total transfered amount= %d", totalTr);
}
void last()
{
    printf("\n*******\n");
    printf("\n Your name= %s", a);
    printf("\n Account number= %d", Acc);
    printf("\n Total amount= %d", total_amount);
    printf("\n Total deposited amount= %d", total_deposit);
    printf("\n Total withdraw amount= %d", total_withdraw);
    printf("\n Total transfered amount= %d", totalTr);
    printf("\n*******\n");
}