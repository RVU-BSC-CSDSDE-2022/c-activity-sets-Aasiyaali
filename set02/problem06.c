#include<stdio.h>
int main()
{
    printf("Enter the size of the array:");
    int size;
    scanf("%d",&size);
    int arr[size],j=0,sum=0,cout=0;
    double avg;

    printf("Enter the Element of the array:\n");
     for(j=1;j<=size;j++)
    {
        scanf("%d",&arr[j]);
        if(j%2!=0){
            sum+=arr[j];
            cout++;
        }
    }
    avg=(double)(sum/cout);
    printf("Average of Numbers in array at odd position is %lf",avg);
    }