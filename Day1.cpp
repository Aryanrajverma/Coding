/*1. fibonacci pattern 

1
1  2
3  5  8
13 21 34 55 */

#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of rows\n";
    cin>>n; 
    int l=n*(n+1)/2;    \\ to find toatal number of values in the n row pattern and find fibonacci up to that value
    int arr[l];
    arr[0]=1,arr[1]=1;
    for(int i=2;i<l;i++)
    {
        arr[i]=i+arr[i-1];
    }

    int k=0;
    for(int i=1;i<=n;i++)                 
    {
        for(int j=1;j<=i;j++)
        {
            cout<<arr[k++];

        }
        cout<<endl;
        
    }

}



//2. Programm to Reverse the character (From upper to lower case and vice versa and put % in place of space)
#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"enter the string\n";
    getline(cin,s); 
    
    
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]>=65 && s[i]<=90) // range of Upper case in ASCII i.e A-Z
        {
            s[i]=s[i]+32;
        }
        else if(s[i]>=97 && s[i]<=122) range of Lower case in ASCII i.e a-z
        {
            s[i]=s[i]-32;
        }
        else{
            s[i]='%';
        }
    }
    cout<<s;
    return 0;

}
