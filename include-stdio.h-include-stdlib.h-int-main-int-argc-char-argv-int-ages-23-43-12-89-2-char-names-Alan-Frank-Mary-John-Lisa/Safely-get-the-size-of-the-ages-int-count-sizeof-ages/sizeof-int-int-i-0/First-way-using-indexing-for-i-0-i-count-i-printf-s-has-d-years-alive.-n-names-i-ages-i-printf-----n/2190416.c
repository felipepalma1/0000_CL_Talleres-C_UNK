#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
	int ages [] = { 23, 43, 12, 89, 2 };
	char * names [] = { "Alan" , "Frank" , "Mary" , "John" , "Lisa" };
	
	//Safely get the size of the ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;
	
	//First way using indexing
	for (i = 0; i < count; i++)
	{
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}
	
	printf("---\n");
	
	//Setup pointers to the start of the arrays
	int * cur_name = ages;
 char **cur_name = names;

	
	return 0;
}
