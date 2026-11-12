#include <stdio.h>
#include <string.h>

int main() {
    char message[200];
    char result[300];
    char *found;

    printf("Enter your feedback: ");
    fgets(message, 200, stdin);

    message[strcspn(message, "\n")] = '\0';

    printf("Total characters: %d\n", (int)strlen(message));

    if (strstr(message, "bad") != NULL) 
    {
        printf("The word 'bad' was found.\n");
    }
    if (strstr(message, "good") != NULL) 
    {
        printf("The word 'good' was found.\n");
    }

    found = strstr(message, "bad");

    if (found != NULL) 
    {
        strcpy(result, message);           
        result[found - message] = '\0';    
        strcat(result, "not good");        
        strcat(result, found + 3);         

        printf("Updated review: %s\n", result);
    } 
    else 
    {
        printf("No 'bad' to replace. Review: %s\n", message);
    }

}