#include<stdio.h> 
#include<stdlib.h>
  
int main(int argc,char* argv[]) 
{ 
    int counter; 
    int temp;
    FILE *f;
      f = fopen("ar.csv","r");
   
   printf("Sort array"); 

   while(fgets(f)!='\0')
     printf("%s",fgets(f));
    //if(argc==1) 
        //printf("\nNo Extra Command Line Argument Passed Other Than Program Name"); 
   //if(argc>=2) 
   //{ 
       
       // printf("\nNumber Of Arguments Passed: %d",argc); 
       // printf("\n----Following Are The Command Line Arguments Passed----"); 
   //     for(counter=1;counter<argc;counter++) 
     //      {
       //     for(temp=1;temp<=atoi(argv[counter]);temp++)
                  
 
         //   printf("\nargv[%d]:",counter); 
          
   // }
         
// }
    return 0; 
} 
