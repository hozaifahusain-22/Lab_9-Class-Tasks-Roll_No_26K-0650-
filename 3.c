#include <stdio.h>
#include <string.h>

int main() 
{
    char email[100];
    char domain[100];
    char *symbol;

    printf("Enter employee email address: ");
    scanf("%s", email);

    symbol = strchr(email, '@');

    if (symbol != NULL) 
    {
        strcpy(domain, symbol + 1);
        printf("Domain name: %s\n", domain);
    } 
    else 
    {
        printf("Invalid email! No @ symbol found.\n");
    }

}