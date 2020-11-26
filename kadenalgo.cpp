#include<iostream>
using namespace std;

int maxsubarray(int a[] , int size)
{
    int maxending = 0;
    int maxfar = 0;

    for(int i = 0; i < size; i++)
    {
        maxending = maxending + a[i];
        if(maxfar < maxending)
        maxfar = maxending;

        if(maxending < 0)
        maxending = 0;
    }
    return maxfar;
}

int main()
{
    int a[] = {1 , -3 , 2 , 1 , -1};
    int n = sizeof(a) / sizeof(a[0]);
    int maxsum = maxsubarray(a , n);
    cout<<"maximum sum of subarray is "<<maxsum;
    return 0;
}