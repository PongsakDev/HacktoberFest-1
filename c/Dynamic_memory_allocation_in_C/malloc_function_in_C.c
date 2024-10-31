// malloc() function in C

ptr=(cast-type*)malloc(byte-size)  

#include<stdio.h>  
#include<stdlib.h>  
int main(){  
  int n,i,*ptr,sum=0;    
    printf("Enter number of elements: ");    
    scanf("%d",&n);    
    ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc    
    if(ptr==NULL)                         
    {    
        printf("Sorry! unable to allocate memory");    
        exit(0);    
    }    
    printf("Enter elements of array: ");    
    for(i=0;i<n;++i)    
    {    
        scanf("%d",ptr+i);    
        sum+=*(ptr+i);    
    }    
    printf("Sum=%d",sum);    
    free(ptr);     
return 0;  
}    

/*
Output

Enter elements of array: 3
Enter elements of array: 10
10
10
Sum=30
*/

