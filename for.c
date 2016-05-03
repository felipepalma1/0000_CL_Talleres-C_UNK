#include <stdio.h>
#include <stdlib.h>


int x; 

main()
{

	printf("for(x=1; x<1; x++){\nprintf('a');\n}\n");
	for(x=1; x<1; x++){
		printf("a\n");
	}
	
	system("PAUSE");
	
	printf("for(x=1; x>1; x++){\nprintf('a');\n}\n");
	for(x=1; x>1; x++){
		printf("a\n");
	}
	
	system("PAUSE");
	
	printf("for(x=1; x<2; x++){\nprintf('a');\n}\n");
	for(x=1; x<2; x++){
		printf("a\n");
	}
	
	system("PAUSE");
	
	printf("for(x=1; x<=1; x++){\nprintf('a');\n}\n");
	for(x=1; x<=1; x++){
		printf("a\n");
	}
	
	system("PAUSE");
	
	/*for(x=0; x=<2; x++){
		printf("a\n");
	}*/
}
