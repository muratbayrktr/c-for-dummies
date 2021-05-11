#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define upper 27
#define lower 0


int main(void)
{
	char ch,*word_array = malloc(500*15);
	int index_arr[100] = {0};
	int i,r,k; 
	srand(time(NULL));   // Initialization, should only be called once.
	r = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX.
	
	i = k = 0;
	index_arr[k++] = 0;
	while (ch = getchar(), ch != EOF)
	{
		if (ch == ' ' || ch == '\n')
		{
			index_arr[k++] = i+1;
		}
		*(word_array + i++) = ch;
		
	}

	for (i = 0; i < 27; i++)
	{
		int number,index,next_index;
		number = (rand() % (upper - lower + 1)) + lower;
		index = index_arr[number];
		next_index = index_arr[number+1];
		for (k = index; k < next_index; k++)
		{
			if (word_array[k] == '\n') {
				continue;
			} else {
				printf("%c",word_array[k]);
			}
			
		}
		/*printf("%d %c\n",index_arr[i],word_array[index_arr[i]]);*/
	}
	return 0;
}