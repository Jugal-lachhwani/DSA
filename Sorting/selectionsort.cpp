#include<iostream>
using namespace std;
int main()
{
    int array_size;
    cout << "Enter the size of the array: ";
    cin >> array_size;
    int array[array_size];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<array_size; i++)
        cin >> array[i];
    int i,j,min;
    for (i = 0; i < array_size - 1; i++) {
        min = i;
        for (j = i + 1; j < array_size; j++)
            if (array[j] < array[min])
                min = j;
        if(min!=i)
        swap(array[i], array[min]);  // swap the found minimum element with the first element of unsorted array
    
    }
    cout<<"Ascending order is "<<endl;
    // printing array in ascending order
    for(int i=0; i<array_size; i++)
        cout << array[i]<<endl;
    cout<<"Descending order is "<<endl;
      for(int i=array_size-1; i>=0; i--)
        cout << array[i]<<endl;
}