#include<bits/stdc++.h>
using namespace std;
struct Activity{
    int start, end;
};

bool cmp (Activity a, Activity b){
    return a.end<b.end;
}

void maxActivity(Activity actArr[], int n){
    sort(actArr, actArr+n, cmp);

    int i=0;
    int count = 0;
    for(int j= 0; j<=n; j++){
        if(actArr[j].start>= actArr[i].end){
            count++;
            i=j;
        }
    }

    cout<<"Max is: "<<count<<"\n";
}

int main(){
int n;
cin>>n;
Activity actArr[n];
for(int i=0; i<n; i++){
    cout<<"enter S & E for meeting "<<i+1<<": ";
    cin>>actArr[i].start>>actArr[i].end;
}

maxActivity(actArr, n);


    return 0;
}