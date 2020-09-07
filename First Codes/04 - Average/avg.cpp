/*
Calculate the average of a integer array
*/

#include <iostream>
using namespace std;

//Prototype
int avg(int int_array[], int len_array);

int main()
{

    //Inputs
    int length_array;

    do
    {
        cout << "Enter the length of the array:" << endl;
        cin >> length_array;
    }   while(length_array < 1);

    int integer_array[length_array];

    for(int i{0}; i < length_array; i++)
    {
        cout << "Enter the element number "<< i + 1 << " of the array" << endl;
        cin >> integer_array[i];
    }

    //Average function
    int result_avg = avg(integer_array, length_array);
    cout << "The average of the array is: " << result_avg << endl;
}

int avg(int int_array[], int len_array)
{

    int sum{0};

    for(int i{0}; i < len_array; i++
    {
        sum += int_array[i];
    }

    return sum/len_array;
}
