#include <iostream>
#include <vector>
using namespace std;
int main(){
    int T, N, i, resultado, aux;
 
    vector<int> v;
    v.reserve(10001);
 
    for(cin >> T; T; T--){
       cin >> N;
       for(i=1; i<=N; i++)
          cin >> v[i];
       resultado = 0;
       i = 1;
 
       while(i < N){
          if(v[i] != i){
             resultado++;
             aux = v[v[i]];
             v[v[i]] = v[i];
             v[i] = aux;
          }
          else
             i++;
       }
       cout << resultado << endl;
    }
}
