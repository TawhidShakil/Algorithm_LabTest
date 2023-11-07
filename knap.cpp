#include<bits/stdc++.h>
using namespace std;
struct Item{
    int value, weight;
};

bool cmp(Item a, Item b){
    double r1 = double(a.value/a.weight);
    double r2 = double(b.value/b.weight);
    return r1>r2;
}
int main(){

int n;
cin>>n;
Item items[n];
for(int i=0; i<n; i++){
    cout<<"Enter the V & W for item "<<i+1<<": ";
    cin>>items[i].value>>items[i].weight; 
}

sort(items, items+n, cmp);

int targeted_weight;
cout<<"Enter the targeted weight: ";
cin>>targeted_weight;

int currentWeight = 0;
double maxValue = 0.0;

for(int i=0; i<n ;i++){
    if(currentWeight + items[i].weight <= targeted_weight){
        currentWeight+= items[i].weight;
        maxValue += items[i].value;
    }else{
        int remain = targeted_weight - currentWeight;
        maxValue += double(items[i].value/items[i].weight*remain);
        break;
    }
}

cout<<"Max value is: "<<maxValue<<"\n";

    return 0;
}