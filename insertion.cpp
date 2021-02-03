#include<iostream>
#include<conio.h>

using namespace std;

void insertionsort(int arr[])
{
    int j=0;
    int key;
for (int i = 0; i < 5; i++)
{
   key=arr[i];
   j=i-1;
   while (j>=0 && arr[j]>key)
   {
       arr[j+1]=arr[j];
       j=j-1;
   }
   arr[j+1]=key; 
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
cout<<"unsorted array is :"<<endl;
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
insertionsort(arr);
cout<<"sorted array :"<<endl;
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
    return 0;
}