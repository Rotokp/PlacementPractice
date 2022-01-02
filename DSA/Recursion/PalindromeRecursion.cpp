#include<iostream>
using namespace std;
int c=0;
void palindrome(char *a,char *b,int k ,int i){
    
    if(a[i]!='\0')
    return;

   
  palindrome(a,b,k--,i++);
    if(a[i-1]==b[k])
    {
        c++;
        
    }
    



}

int main(){
    char a[100],b[100];
    int i,j,k,r=0;
    cout<<"enter elements";
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
      k++;
    }
    for(i=0;a[i]!='\0';i++)
    {
      b[i]=a[i];
    }
    b[i]='\0';
    palindrome(a,b,k,r);
    if(c==k){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
