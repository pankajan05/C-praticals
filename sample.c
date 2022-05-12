// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include<string.h>  

int RQ[100],i,j,TotalHeadMoment=0,initial,size,move = 0,previous,n;

void scan(){
    // logic for Scan disk scheduling
    
        /*logic for sort the request array */
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(RQ[j]>RQ[j+1])
            {
                int temp;
                temp=RQ[j];
                RQ[j]=RQ[j+1];
                RQ[j+1]=temp;
            }

        }
    }

    int index;
    for(i=0;i<n;i++)
    {
        if(initial<RQ[i])
        {
            index=i;
            break;
        }
    }
   
    // if movement is towards high value
    if(move==1)
    {
        for(i=index;i<n;i++)
        {
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
            initial=RQ[i];
        }
        //  last movement for max size 
        TotalHeadMoment=TotalHeadMoment+abs(size-RQ[i-1]-1);
        initial = size-1;
        for(i=index-1;i>=0;i--)
        {
             TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
             initial=RQ[i];
            
        }
    }
    // if movement is towards low value
    else
    {
        for(i=index-1;i>=0;i--)
        {
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
            initial=RQ[i];
        }
        //  last movement for min size 
        TotalHeadMoment=TotalHeadMoment+abs(RQ[i+1]-0);
        initial =0;
        for(i=index;i<n;i++)
        {
             TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
             initial=RQ[i];
            
        }
    }
    
    printf("Total head movement is %d",TotalHeadMoment);
}


int main() {
    // Write C code here
    printf("Hello world");
    char input[20];
    int disk; //loc of head
    int temp,max;
    int dloc; //loc of disk in array
    printf("enter number of location\t");
    scanf("%d",&size);
    printf("enter position of head\t");
    scanf("%d",&initial);
    printf("enter previous disk request\t");
    scanf("%d",&previous);
    printf("enter elements of disk queue\n");
    for(i=0;i>=0;i++)
    {
    scanf("%s",input);
    if(!strcmp(input,"QUIT"))
    {
        printf("Input Received Successfully");
        n=i+1;
        break;
    }else {
      RQ[i] = atoi(input);
    }
    }
    
    scan();
    
    return 0;
}