#include <iostream>
#include <ctime>
#include <time.h>


using namespace std;

/*
void swap_(int* arr[], int a, int b) //*a und *b ist jeweils der index fuer die
{
    *arr[a] = *arr[a] + *arr[b] ;
    *arr[b] = *arr[a] - *arr[b];
    *arr[a] = *arr[a] - *arr[b];
}
*/

void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}


void build_heap(int arr[], int n) {
    //Build heap(rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    time_t vorher = time(NULL);
    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
    time_t nachher = time(NULL);

    cout << "Dauer: " << nachher - vorher << "sec" << endl;
    cout << endl << endl;
}


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
            arr[i] = rand();
            //cout << arr[i] << " , ";
        }

        cout << endl << endl;    

        int n = input;

        //sort kommt hier rein
        build_heap(arr, n);

        for (int i = 1; i < input; ++i)
            cout << arr[i] << " ";
        cout << "\n";
    };

    ~Dynamic_Array() {
        delete[] arr;
        cout << "\narray wurde geloescht" << endl << endl;
    };
};


int main() {
    Dynamic_Array arr;
    
}
