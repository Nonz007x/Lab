#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define VAT - 0.07
char invoice_number[10], date[9], due_date[9], customer_name[20];   
char itemName1[20], itemName2[20], itemName3[20];    
int quantity1, quantity2, quantity3;
float unitPrice1, unitPrice2, unitPrice3;
float totalAmount = 0, amountDue = 0;
struct itemsData
{
    // char itemName[20];
    int quantity;
    // float unitPrice;
};

struct itemsData *item;

void itemList();
void transactionData();
float totalPrice_calc(float price, int quantity);
float amountDue_calc();
void itemList_struct(void);

int main(void)
{
    // transactionData();
    itemList();
    totalPrice_calc(100,1);
    amountDue_calc();
    itemList_struct();
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", item[i].quantity);

    }
    return 0;
}

void transactionData(void)
{
    printf("Please enter the invoice number: ");
    scanf("%s", &invoice_number);
    printf("Please enter the date: ");
    scanf("%s", &date);
    printf("Please enter due date: ");
    scanf("%s", &due_date);
    printf("Please enter customer name: ");
    scanf("%s", &customer_name);
}
void itemList(void)
{
    printf("Please enter the name of item1: ");
    scanf("%s", &itemName1);
    printf("Please enter the quantity of item 1: ");
    scanf("%d", &quantity1);
    printf("Please enter the unit price of item 1: ");
    scanf("%f", &unitPrice1);

    printf("Please enter the name of item2: ");
    scanf("%s", &itemName2);
    printf("Please enter the quantity of item 2: ");
    scanf("%d", &quantity2);
    printf("Please enter the unit price of item 2: ");
    scanf("%f", &unitPrice2);

    printf("Please enter the name of item3: ");
    scanf("%s", &itemName3);
    printf("Please enter the quantity of item 3: ");
    scanf("%d", &quantity3);
    printf("Please enter the unit price of item 3: ");
    scanf("%f", &unitPrice3);
}
float totalPrice_calc(float price, int quantity)
{
    totalAmount += price * quantity;
    return totalAmount;
}
float amountDue_calc(void)
{
    return totalAmount += totalAmount * VAT;
}

void itemList_struct(void)
{
    item = (struct itemsData*) malloc(3 * sizeof(struct itemsData));
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &item[i].quantity);
    }
}