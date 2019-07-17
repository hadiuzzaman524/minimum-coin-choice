#include<bits/stdc++.h>
using namespace std;

int minCoins(int coins[], int m, int V)
{
   if (V == 0)
    return 0;
  int result=9999;

   for (int i=0; i<m; i++)
   {
     if (coins[i] <= V)
     {
         int subresult = minCoins(coins, m, V-coins[i]);
       if(subresult!=9999&&subresult+1<result)
         result=subresult+1;
     }
   }
 return result;
}

int main()
{ int n,total;
cout<< "total taka?";
cin>>total;
  cout<< "how many number of coin? ";
  cin>>n;

    int coins[n];
    for(int i=0;i<n;i++)
        cin>>coins[i];
    cout << "Minimum coins required is "
         << minCoins(coins, n, total);
    return 0;
}
