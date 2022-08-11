#include <stdio.h>
#include <stdlib.h>
char num1[500];
char num2[500];
struct Item *head1 = NULL;
struct Item *head2 = NULL;
struct Item
{
    int data;
    struct Item *next;
};
void insertAtBeginning(struct Item **head_ref, int new_data);
void insertAtEnd(struct Item **list, int value);
struct Item *addLL(struct Item *Item1, struct Item *Item2);
struct Item *multiplyLL(struct Item *Item1, int n, int shiftPlaces);
void reverseLL(struct Item **list);
struct Item *multiply(struct Item *Item1, struct Item *Item2);
void printListAsNumber(struct Item *Item);
int main()
{
    printf("Enter First Number : ");
    gets(num1);
    printf("Enter Second Number : ");
    gets(num2);
    for (int i = 0; num1[i] != NULL; i++)
        insertAtBeginning(&head1, num1[i] - '0');
    for (int i = 0; num2[i] != NULL; i++)
        insertAtBeginning(&head2, num2[i] - '0');
    printf("\nThe Sum is : ");
    printListAsNumber(addLL(head1, head2));
    printf("\nThe Product is : ");
    struct Item *multipliedAnswer = multiply(head1, head2);
    reverseLL(&multipliedAnswer);
    printListAsNumber(multipliedAnswer);
    printf("\n");
    return 0;
}
void insertAtBeginning(struct Item **head_ref, int new_data)
{
    if (new_data != NULL - '0')
    {
        struct Item *new_Item = (struct Item *)malloc(sizeof(struct Item));

        new_Item->data = new_data;
        new_Item->next = (*head_ref);
        (*head_ref) = new_Item;
    }
}
void insertAtEnd(struct Item **list, int value)
{
    struct Item *new_Item = (struct Item *)malloc(sizeof(struct Item));
    new_Item->data = value;
    new_Item->next = NULL;
    struct Item *head = *list;
    if (*list == NULL)
        *list = new_Item;
    else
    {
        while (head->next != NULL)
            head = head->next;
        head->next = new_Item;
    }
}
struct Item *addLL(struct Item *Item1, struct Item *Item2)
{
    int var, carry = 0, value;
    struct Item *new_Item = NULL;
    while (Item1 != NULL && Item2 != NULL)
    {
        var = Item1->data + Item2->data;
        value = var + carry;
        carry = (value) / 10;
        value = (value) % 10;
        insertAtBeginning(&new_Item, value);
        Item1 = Item1->next;
        Item2 = Item2->next;
    }
    while (Item1 != NULL)
    {
        value = (Item1->data + carry) % 10;
        carry = (Item1->data + carry) / 10;
        insertAtBeginning(&new_Item, value);
        Item1 = Item1->next;
    }
    while (Item2 != NULL)
    {
        value = (Item2->data + carry) % 10;
        carry = (Item2->data + carry) / 10;
        insertAtBeginning(&new_Item, value);
        Item2 = Item2->next;
    }
    if (carry != 0)
        insertAtBeginning(&new_Item, carry);
    return new_Item;
}
struct Item *multiplyLL(struct Item *Item1, int n, int shiftPlaces)
{
    int carry = 0;
    struct Item *tempItem1 = NULL;
    for (int i = shiftPlaces; i > 0; i--)
        insertAtEnd(&tempItem1, 0);
    while (Item1 != NULL)
    {
        insertAtEnd(&tempItem1, ((n * Item1->data) + carry) % 10);
        carry = ((n * Item1->data) + carry) / 10;
        Item1 = Item1->next;
    }
    if (carry != 0)
    {
        while (carry > 9)
            insertAtEnd(&tempItem1, carry % 10), carry = carry / 10;
        insertAtEnd(&tempItem1, carry);
    }
    return tempItem1;
} 
void reverseLL(struct Item **list)
{
    struct Item *prev = NULL;
    struct Item *current = *list;
    struct Item *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *list = prev;
}
struct Item *multiply(struct Item *Item1, struct Item *Item2)
{
    struct Item *addingMulValues = NULL;
    int i = 0, n;
    while (Item2 != NULL)
    {
        n = Item2->data;
        if (Item1 != NULL)
            addingMulValues = addLL(multiplyLL(Item1, n, i), addingMulValues), reverseLL(&addingMulValues);
        i += 1;
        Item2 = Item2->next;
    }
    return addingMulValues;
}
void printListAsNumber(struct Item *Item)
{
    while(Item)
    {
        printf("%d", Item->data);
        Item = Item->next;
    }
    return;
}