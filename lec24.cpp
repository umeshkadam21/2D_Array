// This is sieve of Eratosthenes approach

// This program is used to find the total prime numbers strictly less then the n.

#include<bits/stdc++.h>
using namespace std;

int countPrime(int n){
    vector<bool> prime(n+1, true);

    
    int count = 0;
    prime[0] = prime[1] = false;
    for(int i=0; i<n; i++){
        if(prime[i]){
            count++;
            for(int j=i*2; j<n; j=j+i){
                prime[j] = false;
            }
        }
    }
    // for(auto i : prime){
    //     cout<<i<<endl;
    // }
    return count;
}


int main(){
  int n;
  cin >> n;

  cout<< countPrime(n) << endl;
  
  return 0;
}
