// Last Occurrence Binary Search
#include <iostream>
using namespace std;

int findLastOccurrence(int arr[], int size, int key)
{
    int low = 0, high = size - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            result = mid; // Store index and search on the right
            low = mid + 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return result;
}

int main()
{
    int arr1[] = {1, 2, 3, 3, 3, 4, 4, 5};
    int key1 = 3;
    int index1 = findLastOccurrence(arr1, sizeof(arr1) / sizeof(arr1[0]), key1);

    if (index1 != -1)
        cout << "Last Occurrence = " << index1 << endl;
    else
        cout << "Item not found" << endl;

    int arr2[] = {1, 2, 3, 3, 3, 4, 5, 5};
    int key2 = 6;
    int index2 = findLastOccurrence(arr2, sizeof(arr2) / sizeof(arr2[0]), key2);

    if (index2 != -1)
        cout << "Last Occurrence = " << index2 << endl;
    else
        cout << "Item not found" << endl;

    return 0;
}
