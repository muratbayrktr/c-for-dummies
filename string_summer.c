#include<stdio.h>
#include<string.h>

int main(void) {
    /* declaring variables */
    char string[200];
    int length,i,sum;

    /* Taking sentence as input */
    printf("Please insert your favorite quote.[max 200 char]\n");
    scanf("%[^\n]",string);
    
    /* Calculating sum */
    length = strlen(string); /* strlen is out of loop for efficiency purposes */
    for (i=0; i < length; i++){
        sum += string[i];
    }
    printf("\nThe sum of the string is: %d\n",sum);
    return 0;
}