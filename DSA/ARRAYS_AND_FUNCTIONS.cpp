#include<iostream>

using namespace std;
 /* ARRAYS AND FUNCTIONS*/
 /* ARRAYS- CLASS 1 */

 // HA PASS BY REFFENCE WALA FUNCTION AAHE

    void printArray(int arr[], int size)/* THIS IS FUNCTION*/
    {
        for(int i=0;i<size; i++){
            cout<< arr[i]<<" ";
        }
        cout<< endl;
    }
    
    void inc(int arr[],int size)/* THIS IS FUNCTION*/
    {
        arr[0]=arr[0]+10;

        printArray(arr,size);
    }
    int main()/* THIS IS ARRAY */{
     int arr[]={5,6};
     int size=2;
     inc(arr,size);
     printArray(arr,size);
    }