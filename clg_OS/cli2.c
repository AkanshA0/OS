#include<stdio.h> 
  
int main(int argc,char* argv[]) 
{ 
    int counter; 
    printf("printing arguments in reverse order"); 
    if(argc==1) 
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name"); 
    if(argc>=2) 
    { 
      //  printf("\nNumber Of Arguments Passed: %d",argc); 
      //  printf("\n----Following Are The Command Line Arguments Passed----"); 
        for(counter=argc-1;counter>=0;counter--) 
            printf("\nargv[%d]: %s",counter,argv[counter]); 
    } 
    return 0; 
} 
