#include<iostream>
#include<conio.h>

using namespace std;

void selectionsort(int arr[])
{
for (int i = 0; i < 5; i++)
{
    int min=i;
    for (int j = i+1; j < 5; j++)
    {
       if (arr[j]<arr[min])
       {
           min=j;
       }
    }
    if (min!=i)
    {
      int temp=arr[min];
      arr[min]=arr[i];
      arr[i]=temp;
    }
}
}

int main()
{
int arr[5];
cout<<"enter the elements in the array: "<<endl;
for (int i = 0; i <5; i++)
{
    cin>>arr[i];
}
cout<<"unsorted array is: "<<endl;
for (int i = 0; i <5; i++)
{
    cout<<arr[i];
}
cout<<endl;
selectionsort(arr);
cout<<"sorted array is: "<<endl;
for (int i = 0; i <5; i++)
{
    cout<<arr[i];
}
cout<<endl;
    return 0;
}