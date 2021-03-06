/*
 * Reference Link: https://en.wikipedia.org/wiki/Longest_common_subsequence_problem#Traceback_approach
 * Author: Pankaj Jindal
 */
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
#define MAX 5000
int dp[MAX+1][MAX+1];
int lcs(string aa, string bb){
    int la = aa.size();
    int lb = bb.size();
    assert(la>0 and la<=MAX);
    assert(lb>0 and lb<=MAX);
    string a = "";
    for (int i=0;i<la;i++)
        if(aa[i]=='a' or aa[i]=='e' or aa[i]=='i' or aa[i]=='o' or aa[i]=='u')
            continue;
        else
            a.push_back(aa[i]);
    string b = "";
    for (int i=0;i<lb;i++)
        if(bb[i]=='a' or bb[i]=='e' or bb[i]=='i' or bb[i]=='o' or bb[i]=='u')
            continue;
        else
            b.push_back(bb[i]);
    la = a.size();
    lb = b.size();
    for(int i=0; i<=la; i++)
        for(int j=0; j<=lb ;j++){
            if (i==0 or j==0)
                dp[i][j] = 0;
            else{
                if(a[i-1]==b[j-1])
                    dp[i][j] = 1 + dp[(i-1)][j-1];
                else
                    dp[i][j] = max(dp[i][j-1], dp[(i-1)][j]);
            }
        }
    return dp[la][lb];
}

int main(){
    string a, b;
    int n;
    cin >> a;
    cin >> b;
    cout << "" << lcs(a, b) << endl;
    return 0;
}

