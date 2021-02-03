#include <iostream>
using namespace std;

void merge(int input[], int si, int mid, int ei) 
{
    int i,j,k;
    int n1=mid-si+1;
    int n2=ei-mid;
    int l[1000],r[1000];
    for(i=0; i<n1; i++)
    {
        l[i]=input[si+i];
    }
    for(j=0; j<n2; j++)
    {   r[j]=input[mid+j+1];  //input[mid+j+1]
    }
    i=0; j=0; k=si;  //Initialise k with si
    
    while(i<n1 && j<n2)
    {
        if(l[i]<r[j])  //Change 2, Make a separate case for l[i]=r[j]
        { 
         input[k]=l[i];
            i++;
            k++;   //k++
        }
        if(l[i]>r[j])
        {
            input[k]=r[j];
            j++;
            k++;
        }
        if(l[i]==r[j])
        {   //Change 3
            input[k]=r[j];
            input[k+1]=r[j];
            i++;
            j++;
            k+=2; 
        }     
    }
    while(i<n1)
    {
        input[k]=l[i];
        i++;
        k++;
    }
     while(j<n2)
    {
        input[k]=r[j];
        j++;
        k++;
    }
}

void helper(int input[], int si ,int ei)
{ 
     // if(input[0]=='\0')
     //     return;
    if(si<ei)
    {   //Change 1
    int mid=(si+ei)/2;
    
    helper(input,si,mid);
    helper(input,mid+1,ei);
    merge(input,si,mid,ei);
    }
}
void mergeSort(int input[], int size)
{
	helper(input,0,size-1);
}
int main() 
{
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++)
  {
    cout << input[i] << " ";
  }
}
