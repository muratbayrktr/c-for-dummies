#include<stdio.h>


char zero[75] = {32, 32, 35, 35, 35, 32, 32, 32, 10, 32, 35, 32, 32, 32, 35, 32, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 32, 35, 32, 32, 32, 35, 32, 32, 10, 32, 32, 35, 35, 35, 32, 32, 32};
char one[75] = {32, 32, 35, 32, 32, 32, 10, 32, 35, 35, 32, 32, 32, 10, 35, 32, 35, 32, 32, 32, 10, 32, 32, 35, 32, 32, 32, 10, 32, 32, 35, 32, 32, 32, 10, 32, 32, 35, 32, 32, 32, 10, 35, 35, 35, 35, 35, 32};
char two[75] = {10, 32, 35, 35, 35, 35, 35, 32, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 32, 32, 32, 32, 32, 32, 35, 32, 10, 32, 35, 35, 35, 35, 35, 32, 32, 10, 35, 32, 32, 32, 32, 32, 32, 32, 10, 35, 32, 32, 32, 32, 32, 32, 32, 10, 35, 35, 35, 35, 35, 35, 35, 32};
char three[75] = {32, 35, 35, 35, 35, 35, 32, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 32, 32, 32, 32, 32, 32, 35, 32, 10, 32, 35, 35, 35, 35, 35, 32, 32, 10, 32, 32, 32, 32, 32, 32, 35, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 32, 35, 35, 35, 35, 35, 32, 32};
char four[75] = {35, 32, 32, 32, 32, 32, 32, 32, 10, 35, 32, 32, 32, 32, 35, 32, 32, 10, 35, 32, 32, 32, 32, 35, 32, 32, 10, 35, 32, 32, 32, 32, 35, 32, 32, 10, 35, 35, 35, 35, 35, 35, 35, 32, 10, 32, 32, 32, 32, 32, 35, 32, 32, 10, 32, 32, 32, 32, 32, 35, 32, 32};
char five[75] = {35, 35, 35, 35, 35, 35, 35, 32, 10, 35, 32, 32, 32, 32, 32, 32, 32, 10, 35, 32, 32, 32, 32, 32, 32, 32, 10, 35, 35, 35, 35, 35, 35, 32, 32, 10, 32, 32, 32, 32, 32, 32, 35, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 32, 35, 35, 35, 35, 35, 32, 32};
char six[75] = {32, 35, 35, 35, 35, 35, 32, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 35, 32, 32, 32, 32, 32, 32, 32, 10, 35, 35, 35, 35, 35, 35, 32, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 32, 35, 35, 35, 35, 35, 32, 32};
char seven[75] = {35, 35, 35, 35, 35, 35, 35, 32, 10, 35, 32, 32, 32, 32, 35, 32, 32, 10, 32, 32, 32, 32, 35, 32, 32, 32, 10, 32, 32, 32, 35, 32, 32, 32, 32, 10, 32, 32, 35, 32, 32, 32, 32, 32, 10, 32, 32, 35, 32, 32, 32, 32, 32, 10, 32, 32, 35, 32, 32, 32, 32, 32};
char eight[75] = {32, 35, 35, 35, 35, 35, 32, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 32, 35, 35, 35, 35, 35, 32, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 32, 35, 35, 35, 35, 35, 32, 32};
char nine[75] = {32, 35, 35, 35, 35, 35, 32, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 32, 35, 35, 35, 35, 35, 35, 32, 10, 32, 32, 32, 32, 32, 32, 35, 32, 10, 35, 32, 32, 32, 32, 32, 35, 32, 10, 32, 35, 35, 35, 35, 35, 32, 32};

void print_number(int num, char * arrays_of_numbers[])
{
    int i,j;
    char arr[2];

    i = j = 0;

    do
    {
        arr[i] = num % 10;
        num /= 10;
    } while(num > 0);

    i = j = 0;
    char *num_arr = arrays_of_numbers[arr[0]];
    char *num_arr2 = arrays_of_numbers[arr[1]];


    while (i < 75)
    {
        if (num_arr[i] != 0 || num_arr[i] != '\n') {
            printf("%c",num_arr[i]);
        }
        i++;
    }


    printf("\n");

    return ;
}

int main(void) 
{
    void print_number(int num, char *arrays_of_numbers[]);
    char * arrays_of_numbers[10] = {zero,one,two,three,four,five,six,seven,eight,nine};

    print_number(10, arrays_of_numbers);
    return 0;
}
