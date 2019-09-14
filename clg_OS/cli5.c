#include<stdio.h> 
#include <string.h>
  
int main(int argc,char* argv[]) 
{ 
    int counter,i; 
    printf("Reversing each string argument\n"); 
    if(argc==1) 
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name"); 
    if(argc>=2) 
    { 
       // printf("\nNumber Of Arguments Passed: %d",argc); 
       // printf("\n----Following Are The Command Line Arguments Passed----"); 
        for(counter=0;counter<argc;counter++) 
{ 
           for(i=strlen(argv[counter])-1; i>=0; i--){
		printf("%c", argv[counter][i]);	
	}printf("\n");
}
    } 
    return 0; 
} 
