#include <bits/stdc++.h>
using namespace std;

struct Activitiy{
	char ch; int start, finish;
};

bool activityCompare(Activitiy s1, Activitiy s2){
	return (s1.finish < s2.finish);
}

void printMaxActivities(Activitiy arr[], int n){
	sort(arr, arr+n, activityCompare);
    char s;
    cout<<"Enter the name of activity of choice: ";
    cin>>s;
    int s_start, s_finish,index;
    for (int i = 0; i < n; i++){
        if(s==arr[i].ch){
            index = i;
            s_start = arr[i].start;
            s_finish = arr[i].finish;
            break;
        }
    }
	cout << "Following activities are selected: ";
	int i = 0;
    bool visited = true;
	if(arr[i].finish<s_start)
        cout << arr[i].ch << ", ";
	for (int j = 0; j < n; j++){
        if (arr[j].start >= arr[i].finish){
            if(arr[j].finish > s_start && visited){
                cout << s << ", ";
                i = index;
                visited = false;
            }
            else{
                cout << arr[j].ch << ", ";
                i = j;
            }
        }
	}
}

int main(){
	Activitiy arr[] = {{'p', 3, 5}, {'q', 0,6}, {'r', 3, 9}, {'s', 5, 9}, {'t', 6, 10}, {'u', 8, 11}, {'v', 2, 14}, {'w', 12, 16}, {'x', 5, 7}, {'y', 8, 12}, {'z', 1, 4}};
	int n = sizeof(arr)/sizeof(arr[0]);
	printMaxActivities(arr, n);
	return 0;
}