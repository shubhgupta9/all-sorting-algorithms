#include<iostream>
#include<conio.h>

using namespace std;

void bubblesort(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j<5-i-1 ; j++)
        {
          if (arr[j]>arr[j+1])
          {
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
        }
    }
}

int main()
{
int arr[5];

cout<<"enter the elements :"<<endl;

for (int i = 0; i < 5; i++)
{
    cin>>arr[i];
}
cout<<"unsorted array is:"<<endl;
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
bubblesort(arr);
cout<<"sorted array :"<<endl;
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}