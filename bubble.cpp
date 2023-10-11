#include <iostream>
#include <chrono>
#include <thread>
#include "functions.h"
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

int main()
{
    int size = 30000;
    int array[size];
    
    // populating array with random numbers 1 - 3000
    vector<int> uniqNum;
    for (int i = 1; i <= size; i++) {uniqNum.push_back(i);}

    mt19937 generator(static_cast<unsigned int>(time(0)));
    shuffle(uniqNum.begin(), uniqNum.end(), generator);
    copy(uniqNum.begin(), uniqNum.begin() + size, array);


    cout << "[BUBBLE SORT PROGRAM]" << endl;
    cout << "---------------------" << endl;

    cout << "Stage 1. -> Populating array with random numbers" << endl;
    cout << "   [0] - task started" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "." << flush;
            this_thread::sleep_for(chrono::milliseconds(400));
        }
        cout << "  " << flush;
        this_thread::sleep_for(chrono::milliseconds(500)); 
    }
    cout << endl;

    cout << "   [1] - task finished" << endl;

    //int size = sizeof(array) / sizeof(array[0]); 

    // -- BUBBLE SORT --
    auto start = chrono::steady_clock::now();

    bubble_sort(array, size);

    auto end = chrono::steady_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

    cout << "[bubble sort] time - " << duration.count() << " x10^(-3)s" << endl;

    return 0;
}
