// #include<bits/stdc++.h>
// using namespace std;
// int numOfWay(int coin[], int n, int amount){
//     int values[amount+1];
//     memset(values, 0, sizeof(values));
//     values[0] = 1;
//     for(int i=0; i<n; i++){
//         for(int j = coin[i]; j<=amount; j++){
//             values[j] += values[j - coin[i]];
//         }
//     }

//     return values[amount];
// }
// int main(){
// int n;
// cin>>n;
// int coin[n];
// for(int i=0; i<n; i++){
//     cin>>coin[i];
// }

// int amount;
// cin>>amount;

// int way = numOfWay(coin, n, amount);

// cout<<"Number of ways: "<<way<<"\n";

//     return 0;
// }

// // #include<bits/stdc++.h>
// // using namespace std;

// // int numOfWay(int coins[],int sz,int money)
// // {
// //     int values[money+1];
// //     memset(values,0,sizeof(values));
// //     values[0] = 1;

// //     for(int i=0;i<sz;i++){
// //         for(int j=coins[i];j<=money;j++)
// //             values[j] += values[j - coins[i]];
// //     }

// //     return values[money];

// // }

// // int main()
// // {
// //     int coins[] = {1,2};
// //     int money = 6;
// //     int sz = sizeof(coins) / sizeof(coins[0]);

// //     int ans = numOfWay(coins,sz,money);
// //     printf("Money %d can be made in %d ways.\n",money,ans);
// // }

#include<bits/stdc++.h>
using namespace std;
int numOfWay(int coin[], int n, int amount){
    int values[amount+1];
    memset(values, 0, sizeof(values));
    values[0] = 1;
    for(int i=0; i<n; i++){
        for(int j=coin[i]; j<=amount; j++){
            values[j] += values[j - coin[i]];
        }
    }

    return values[amount];
}
int main(){
int n;
cin>>n;
int coin[n];
for(int i=0; i<n; i++){
    cin>>coin[i];
}

int amount;
cin>>amount;

int way = numOfWay(coin, n, amount);
cout<<way<<"\n";


    return 0;
}