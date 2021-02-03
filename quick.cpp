int partition(int input[], int start, int end)
{ 
    int x,flag=0;
    x=input[start];
   for(int i=start+1;i<=end;i++)
   {
       if(input[start]>=input[i])
       {
           flag++;   //to count the variables greator than it
       }
   }
    int pi=start+flag;  //partition condition as shown in video
    int temp;
    temp=input[start];   
    input[start]=input[pi];
    input[pi]=temp;
    int i=0,j=end;
    while(i<=pi && j>=pi)   //main condition
    {
        if(input[i]<=x)
        {
            i++;
        }
        else if(input[j]>x)
        {
            j--;
        }
        else
        {
            int var=input[i];
            input[i]=input[j];
            input[j]=var;
            i++;
            j--;
        }
    }
    return pi;
}  
void helper(int input[], int s, int e)
{ 
     if(s>e)
        return;
    int c=partition(input,s,e);
    helper(input,s,c-1);
    helper(input,c+1,e);
}

void quickSort(int input[], int size)
{ 
helper(input,0,size-1);
}

#include<iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int *input = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
        quickSort(input, n);
    for(int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    delete [] input;
}

