#include<iostream>
using namespace std;


struct Pair
{
    int min;
    int max;
};

struct Pair getminmax(int arr[] , int n)
{
    struct Pair minmax;

    if(arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }

    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for(int i = 2; i < n; i++)
    {
        if(arr[i] > minmax.max)
            minmax.max = arr[i];

        else if(arr[i] < minmax.min)
         minmax.min = arr[i];

    }
        return minmax;
}
int main()
    {
        int arr[] = { 3000 , 11 , 4000 , 5000 , 50 , 1};
        int arrsize = 6;
        struct Pair minmax = getminmax(arr , arrsize);
        
       
        cout<<"minimum number is"<<endl;
        cout<<minmax.min<<endl;
        cout<<"maximium number is"<<endl;
        cout<<minmax.max;
        return 0;
    }
    


