#include "stdafx.h"
#include <iostream>
using namespace std;
 
void anagrama(char A[],char B[],int SIZE )
 
{
    
    bool may = true;
    int i=0,j;
    for (; A[i] && may;i=may?i+1: i)
    {
        
        bool find = false;
        j=i;
        for(;B[j]&&!find;j=find?j:j+1)
            find = B[j] == A[i];
        
        if(find)
        {
            char tmp = B[i];
            B[i]=B[j];
            B[j]=tmp;
        }
        
        else may = false;
    }
    //cout<<A[i]<<endl;
    may = may && A[i]==0 && B[i] == 0;
 
        cout<<boolalpha<<may<<endl;
}

int main()   
{   
    const int SIZE = 10;    
    char A[SIZE],B[SIZE];     
    cout<<"Input first word\n";   
    cin>>A;    
    cout<<"Input second word\n";   
    cin>>B;   
    anagrama(A,B,SIZE);   //!
         return 0;   
}