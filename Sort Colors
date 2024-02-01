#include <iostream>
using namespace std;

void dutch_nationalflag(int arr[], int n)
{
    int start=0;
    int end =n-1;
    int i=0;

    while(i<=end)
    {
        if(arr[i]==0)
        {
            swap(arr[start],arr[i]);
            start++;
            i++;
        }

        else if(arr[i]==2)
        {
            swap(arr[i],arr[end] );
            end--;
        }

        else
        {
            i++;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter size of array";
    cin>>size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a number: ";
        cin >> array[i];
    }

    dutch_nationalflag(array, size);
}
