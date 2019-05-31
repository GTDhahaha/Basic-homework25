#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Array value:\n");
    int *p[4];
    int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int x, y; 
    for(x=0;x<4;x++)
	p[x]=array[x];
    for(x=0;x<4;x++){
    	for(y=0;y<3;y++)
		printf(" %2d ", *(p[x]+y));
		printf("\n");
	}
    system("pause"); 
    return 0; 
}
