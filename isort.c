#include <stdio.h>
#include "isort.h"

void shift_element (int *arr,int i)
{
	while(i)
	{
		*(arr+i+1) = *(arr+i);
		i--;
   	}

} 

void insertion_sort(int *arr, int len)
{
    int i,j,temp;
	for(i=1;i<len;i++)
    	{
        	temp=*(arr+i);
        	j=i-1;
        	while(temp<*(arr+j)&&j>=0)
       		{
            		*(arr+(j+1))=*(arr+j);
            		j--;
        	}
       		*(arr+(j+1))=temp;
   	}
}

