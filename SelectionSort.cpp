#include <iostream>
#include <ctime>
#include <time.h>


using namespace std;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
};

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array 
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]);
    }
};

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 1; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
};

class Dynamic_Array {
private:
    int* arr = 0;

public:
    Dynamic_Array() {
        srand(time(NULL));

        cout << "Anzahl an Zahlen im Array: ";
        int input;
        cin >> input;

        int* arr = new int[input];

        //cout << endl << endl << "Array wird mit " << input << " Zahlen gefuellt" << endl << endl;

        for (int i = 1; i < input; i++) {
            arr[i] = rand() % input;
            cout << arr[i] << " , ";
        }

        cout << endl << endl;

        int n = input;

        //sort kommt hier rein
        selectionSort(arr, n);
        printArray(arr, n);
    }

        ~Dynamic_Array() {
            delete[] arr;
            cout << "\narray wurde geloescht" << endl << endl;
        };
    };


    int main() {
        Dynamic_Array arr;
    }