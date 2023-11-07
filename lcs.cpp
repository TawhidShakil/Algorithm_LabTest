#include<bits/stdc++.h>
using namespace std;
void lcs(string str1, string str2, int n, int m){
    int table[n+1][m+1];
    for(int i =0; i<=n; i++){
        for(int j =0; j<=m; j++){
            if(i ==0 || j== 0){
                table[i][j] = 0;
            }else if(str1[i-1] == str2[j-1]){
                table[i][j] = table[i-1][j-1]+1;
            }else{
                table[i][j] = max(table[i-1][j], table[i][j-1]);
            }
        }
    }

    int index = table[n][m];
    string lcs_string(index, ' ');
    int i =n, j = m;
    while(i>0 && j>0){
        if(str1[i-1] == str2[j-1]){
            lcs_string[index-1] = str1[i-1];
            i--;
            j--;
            index--;
        }else if(table[i-1][j]> table[i][j-1]){
            i--;
        }else{
            j--;
        }
    }

    cout<<"LCS is: "<<lcs_string<<"\n";
}
int main(){

string str1 = "abcd";
string str2 = "abc";
int n = str1.length();
int m = str2.length();

lcs(str1, str2, n, m);

    return 0;
}