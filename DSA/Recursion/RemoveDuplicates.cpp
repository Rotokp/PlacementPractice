#include<iostream>
using namespace std;

void RemoveDuplicate(char * arr){
    if(arr[0]=='\0'){
        return;
    }
    RemoveDuplicate(arr+1);
    if(arr[0]==arr[1]){    
        int i=1;
        for(;arr[i]!='\0';i++){
         arr[i-1]=arr[i];
        }
        arr[i-1]=arr[i];
        return;
    }
    else{
        return;
    }  

    
}

int main(){
    char arr[100];
    
    cout<<"enter char array elements ";
    cin>>arr;
    RemoveDuplicate(arr);
    cout<<arr;
    return 0;
}


/* #include<iostream>
using namespace std;

void RemoveDuplicate(char * arr){
    if(arr[0]=='\0'){
        return;
    }
    if(arr[0]!=arr[1]){
        RemoveDuplicate(arr+1);
    }
    else{
        int i=1;
        for(;arr[i]!='\0';i++){
         arr[i-1]=arr[i];
        }
        arr[i-1]=arr[i];
        RemoveDuplicate(arr);

    }
}

int main(){
    char arr[100];
    
    cout<<"enter char array elements ";
    cin>>arr;
    RemoveDuplicate(arr);
    cout<<arr;
    return 0;
}

*/