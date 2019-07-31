#include <stdio.h>
#define SIZE 100

int linear_search (const int arr[], int key);

int main(void)
{
    int a[SIZE];
    int search_key;
    int element;
    int i;
    for(i=0;i<SIZE;i++)
    {
        a[i]=2*i;
    }
    printf("Enter the search key : ");
    scanf("%d",&search_key);

    element = linear_search(a,search_key);

    if(element != -1)
        printf("key found in element %d\n",element);
    else
        printf("value not found !!\n");

    return 0;
}

int linear_search(const int arr[], int key)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        if(key==arr[i])
       {
           return i;
       }
    }
     return -1 ;
}
