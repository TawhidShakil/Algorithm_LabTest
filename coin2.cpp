// #include<bits/stdc++.h>
// using namespace std;
// int minWay(int coin[], int n, int amount){
//     int values[amount+1];
//     memset(values, 999999, sizeof(values));
//     values[0] = 0;
//     for(int i=1; i<=amount; i++){
//         for(int j=0; j<n; j++){
//             if(coin[j]<= i){
//                 int sub_res = values[i- coin[j]];
//                 if(sub_res != 999999 && sub_res+1<values[i]){
//                     values[i] = sub_res+1;
//                 }
//             }
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

// int way = minWay(coin, n, amount);

// cout<<way<<"\n";
//     return 0;
// }

///Minimum number of coins needed for making specific value
#include<bits/stdc++.h>
using namespace std;

int minNumCoin(int coins[],int sz,int value)
{
    int table[value+1];
    memset(table,999999,sizeof(table));
    table[0] = 0;

    for(int i=1; i<=value; i++)
    {
        for(int j = 0; j<sz; j++)
        {
            if(coins[j] <= i)
            {
                int sub_res = table[i-coins[j]];
                if(sub_res != 999999 && sub_res+1<table[i])
                    table[i] = sub_res + 1;
            }
        }
    }

    return table[value];
}


int main()
{
    int coins[] = {1,2,5};
    int value = 5;
    int sz = sizeof(coins) / sizeof(coins[0]);

    int minCoin = minNumCoin(coins,sz,value);
    printf("Minimum number of coins needed: %d\n",minCoin);
}