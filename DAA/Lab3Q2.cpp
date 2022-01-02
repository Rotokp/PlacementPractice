#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>

using namespace std;

void itemcheck(vector<int> V)
{
    int n=V.size();
    int maxcount=0,p=0;

    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(V[i]==V[j])
            {
                count++;
            }

        }
        if(count>maxcount)
        {
            maxcount=count;
            p=i;
        }
        // cout<<maxcount;
    }
    if(maxcount>int(n/2))
    cout<<V[p]<<" occurs more than "<<int(n/2)<<" times, i.e "<<maxcount<<" times"<<endl;
}
int main()
{
    clock_t t;
    srand(time(NULL));
    vector<int> V;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        V.push_back(rand()%(2)+1);
    }
    for(auto element : V)
    {
        cout<<element<<" ";
    }
    cout<<endl;
    t=clock();
    itemcheck(V);
    t=clock()-t;
    cout<<double((double(t))/CLOCKS_PER_SEC);
    return 0;
}