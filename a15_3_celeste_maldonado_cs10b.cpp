/* 
a15_3_celeste_maldonado_cs10b.cpp
Name: Celeste Maldonado
Email: cmaldonado@bearcubs.santarosa.edu
Date: 12/7/2020
Project Name: 15.3 Recursive function to sort
Course: CS 10B Section 0445, 3031 Dave Harden
Description: Program uses a recursive function to sort an array of integers into ascending order

*/

#include <iostream>
using namespace std;

void sort(int array[], int start, int size);
int indexOfSmallest(const int array[], int size, int start);


int main()
{
    int numbers[] = { 2, 6, 1, 8, 9, 7, 3, 4 };
    
    cout << "Numbers before Sort is called: " << endl;
    for (int i = 0; i < 8; i++) {
        cout << numbers[i] << endl;
    }
    sort(numbers, 0, 8);

    cout << "Numbers after Sort is called: " << endl;
    for (int i = 0; i < 8; i++) {
        cout << numbers[i] << endl;
    }

    
}


void sort(int array[], int start, int size) {
    if (start == size) {
        return;
    }
    else {
        int smallest = indexOfSmallest(array, size, start);
        int first = array[smallest];
        array[smallest] = array[start];
        array[start] = first;
        sort(array, start + 1, size);
    }

}

int indexOfSmallest(const int array[], int size, int start) {
    int smallest = array[start];
    int index = start;
    for (int i = start + 1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
            index = i;
        }
    }
    return index;
}



/* Sample Output:
Numbers before Sort is called:
2
6
1
8
9
7
3
4
Numbers after Sort is called:
1
2
3
4
6
7
8
9
*/