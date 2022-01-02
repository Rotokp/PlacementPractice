#include<iostream>
using namespace std;

void replace(char *arr,char c1,char c2)
{
if(arr[0] == '\0')
return;
if(arr[0]!=c1)
replace(arr+1,c1,c2);
else
{
 arr[0]=c2;
 replace(arr+1,c1,c2);
}

}

int main()
{   char arr[100],c1,c2;
    int l;
    cout<<"enter characters";
    cin>>arr;
    cout<<"enter c1 and c2";
    cin>>c1>>c2;
    replace(arr,c1,c2);
    cout<<arr;
    return 0;
}