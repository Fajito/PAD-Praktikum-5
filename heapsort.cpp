#include <ctime>
#include <iostream>
#include <vector>
#include <time.h>


class dynamic_array
{
private:
    int index = 1;
    int* arr;
    
public:
    dynamic_array(){
        std::cout << "Welche Groesse soll der dynamische Array haben? " << std::endl;
        std::cin >> index;
        index += 1;
        arr = new int [index];
        arr[0] = -1;
    };

    ~dynamic_array(){
        delete [] arr;
    }

    void add_elements(){
        std::cout << "Array wird mit random Werten gefuellt (%10)" << std::endl;

        srand(time(NULL)); 
        
        for (int i = 1; i < index ; i++){
            arr[i] = rand()%10;
        }
    };

    void print(){
        if(index == 1)
            return;

        for(int i = 1; i < index; i++){
            std::cout << "index: " << i << "; VALUE: " << arr[i] << std::endl;
        }
    };

    int get_value(int index){
        return arr[index];
    }
};

class heap_sort{
private:

public:
    void build_heap(){

    };
    void heapify(dynamic_array arr, int ind){

    };
    void swap(dynamic_array arr, int root, int max){
        
        int tmp = arr.get_value[root];

    }

};


int main(){

    char input = '1';

    while (input != '!'){
        dynamic_array arr;
        arr.add_elements();
        arr.print();

        
        //sorting algoritarrm
        time_t vorher = time(NULL);

     
        time_t nachher = time(NULL);

        std::cout<< "Dauer: " << nachher-vorher << " sec"<< std::endl;

       
        arr.print(); 
       
        arr.~dynamic_array();



        std::cout << "weiterer durchgang? '0' bricht das programm ab" << std::endl;
        std::cin >> input;


    }
    
}




