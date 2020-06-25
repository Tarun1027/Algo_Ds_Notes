#include<stdio.h>

int main()
{
    int arr[20];
    int num;
    int i;

    printf("Enter number of elements in array: ");
    scanf("%d", &num);

    printf("Enter your array: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    // max is for maximum number and 
    // smax for next(second) maximum number
    int m, sm;

    // Assigning max and smax with arr[0] and arr[1] depending
    // on the condition max > smax
    if (arr[0] > arr[1])
    {
        m = arr[0];
        sm = arr[1];
    }
    else 
    {
        m = arr[1];
        sm = arr[0];
    }
    
    // Comparing rest of the element in the array
    for (i = 2; i < num; i++)
    {
        if (arr[i] > sm)
        {
            if (arr[i] > m)
            {
                sm = m;				
                m = arr[i];
            }
            else
            {
                sm = arr[i];
            }
        }
    }

    printf("Max: %d\n", m);

    printf("Second max: %d", sm);
}

/*
Enter number of elements in array: 5
Enter your array: 1
2
3
4
5
Max: 5
Next max: 4*/
