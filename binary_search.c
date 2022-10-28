#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{

    int start = 0, end = size - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
    }

    // if element is not found in array
    return -1;
}

int main()
{

    // let's take input from user of hw many elements he/she wants to enter in our array
    int size;
    printf("Enter the number of elements you want to enter in array: ");
    scanf("%d", &size);

    int arr[size];

    printf("\nPlease, start entering the elements in array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element at %d index of array: ", i);
        scanf("%d", &arr[i]);
    }

    int key;
    printf("\nEnter the element you want to search in the array: ");
    scanf("%d", &key);

    int found = binarySearch(arr, size, key);

    if (found == -1)
    {
        printf("\nElement is not present in the inputted array");
    }
    else
    {
        printf("\nElement is present at %d index in the array", found);
    }

    return 0;
}