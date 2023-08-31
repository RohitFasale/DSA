#include<iostream>
#include <cstring>
using namespace std;
int main(){
    /* ARRAYS- CLASS 1 */
    // array declare
    //int arr[7];
    //cout<< arr<<endl;
    //cout<<&arr<<endl;

    // cout<< " array created successfully"<<endl;

    //array Initialize
    // int arr[]={2,3,4,5,6,7};
    // int brr[5]={1,3,5,6,7};
    // int crr[10]={1,3,5,6,7};
    // int drr[4]={1,3,4,5};
    // // [5] this is static array , ek baar main fix ho jati hai value
    // cout<< "Array Initialised suuccessfuly"<<endl;

    // int arr[4]={1,3,5,7};// INT 4 BYTES 
    // // BASE ADDRESS + INDEX * DATA TYPE --> 104 + 0 * 4 =104=1
    // char arr[10]={'A','B','C'};

    // int arr[]={1,3,5,7,9};

    //cout<< arr [4]<<endl;

    // printing all values

    // for(int index=0;index<5;index++){
    //     cout<< arr[index]<<" ";// i ka full form index hota hai

    // }
    
    // int n;
    // cin>> n;
    // // THIS IS A BAD PRACTICE
    // int arr[n];

    // //static array
    // int arr[10];

    // cout<< "Enter The input values in array "<<endl;
    // // Taking input in array
    // for(int i=0;i<10;i++)
    // {
    //     cin>> arr[i];
    // }

    // // printing

    // cout<< " Printing the values in array "<< endl;
    // for(int i=0;i<10;i++)
    // {
    //     cout<< arr[i]<< " ";
    // }


    // Printing Double in array program
    // int arr[500];

    // int n;
    // // Taking Input
    // cout<< "How many Numbers you want toadd in Array:"<<endl;
    // cin>> n;

    // cout<< "Enter The Numbers:-"<<endl;

    // for(int i=0;i<n;i++){
    //     cin>> arr[i];
    // }

    // // print Doubles
    // cout<< "Double:";
    //  for(int i=0;i<n;i++){
        
    //   cout<< 2*arr[i]<<" ";
    // }

    // int arr[5]={1,3,5,7,9};
    // for(int i=0;i<5;i++)
    // {
    //     arr[i]=1;
    // }

    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // int arr[5];
    // int n;

    // cout<< "Enter Array Elements:-";
    // cin>> n;

    // cout<< "Enter The Numbers:-";
    // cin>> n;

    // for(int i=0;i<5;i++){
       
    //     arr[i]=1;
    // }

    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // Memeset Function sathi #include<cstring> he header file use hote
    // int arr[5];
  
    // // all elements of A are zero
    //   memset(arr,  0 ,sizeof(arr));
    // for (int i = 0; i < 5; i++)
    //     cout << arr[i] << " ";
    // cout << endl;


    // int arr[10]={1,2};
    // for(int i=0;i<10;i++)
    // {
    //     cout<< arr[i]<<" ";
    // }
    // outpu:- 1 2 0 0 0 0 0 0 0 0

    // int arr[10];
    // for(int i=0;i<10;i++){
    //     cout<< arr[i]<<" ";
    // }
    //output:- 749278 973 00280983 393802 konti pan garbage value print hoil

    // int arr[10]={0};
    // for(int i=0;i<10;i++)
    // {
    //     cout<< arr[i]<<" ";
    // }
    // output:- 0 0 0 0 0 0 0 0 0
    // zero sobat array chi size initialize keli aahe 

    // int arr[10]={1};
    // for(int i=0;i<10;i++)
    // {
    //     cout<< arr[i]<<" ";
    // }
    // output:- 1 0 0 0 0 0 0 0 0 0 0 0
    // one sobat array chi size initialize keli aahe

    /* ARRAYS AND FUNCTIONS*/
    //  He file array.cpp madhe run hot nahiye tya mule me dusri file create keli aahe tich naav arrays_and_function.cpp asa aahe 
    // void printArray(int arr[], int size){
    //     for(int i=0;i<size; i++){
    //         cout<< arr[i]<<" ";
    //     }
    //     cout<< endl;
    // }
    
    // void inc(int arr[],int size){
    //     arr[0]=arr[0]+10;

    //     printArray(arr,size);
    // }
   
    // int main(){
    //  int arr[]={5,6};
    //  int size=2;
    //  inc(arr,size);
    //  printArray(arr,size);
    // }

    /* THIS IS NOT WORKING IN THIS ARRAY.CPP FILE SO I JUST CREATED NEW FILE IT'S NAME IS ARRAYS_AND_FUNCTION.CPP*/

    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;

    int key=5;
    bool flag=0;
    //0--> not found
    //1--> found

    //linear search
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            // found
            flag=1;
            break;
        }
    }

    if(flag)
        cout<< "present"<<endl;
    else
        cout<<"absent"<<endl;    
    
}


