#include<stdio.h> 
  
int main(int argc,char* argv[]) 
{ 
    int counter; 
    int temp;
    int fact=1;
    printf("Factorial"); 
    if(argc==1) 
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name"); 
    if(argc>=2) 
    { 
       
       // printf("\nNumber Of Arguments Passed: %d",argc); 
       // printf("\n----Following Are The Command Line Arguments Passed----"); 
        for(counter=1;counter<argc;counter++) 
           {
            for(temp=1;temp<=atoi(argv[counter]);temp++)
             fact=fact*temp;         
 
            printf("\nargv[%d]: %d",counter,fact); 
            fact=1;
    }
         
 }
    return 0; 
} 
