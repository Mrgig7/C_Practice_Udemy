#include<stdio.h>
int main()
{
    int x = 5, y = 10;
    int *p=&x, *q=&y;
    *p = *q;
    *q = 20;
    printf("%d %d",x,y);
    return 0;
}

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Even numbers in the array: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}



 
#include <stdio.h>
void main() 
{
    int n;
    printf("no of elements: ");
    scanf("%d", &n);
 
    int arr[n];
 

    printf("elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
 
    printf("Even: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            printf("%d ", arr[i]);
    }
 

}

