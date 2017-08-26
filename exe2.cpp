#include <iostream>

using namespace std;
int fact(int n){
  int res = 1;
  for(int i = 1; i <= n; ++i){
    res *= i;
  }
  return res;
}
int pot(int n, int k){
  int j = 1;
  for(int i = 0; i < k; ++i)
    j *= n;
  return j;
}
int main(){
  int a,b,k;
  string h;
  cin >> a >> b;
  cin >> h;
  k = fact(a)/(fact(a-b)*fact(b));
  cout << k << endl;
  int l;
  int cont=0;
  cout << pot(2,a) << endl;
  for(int i = 0; i < pot(2,a); ++i){
    int p = i;
    l = 0;
    if(cont == k)
      break;
    while(p){
      if(p % 2 == 1){
	l++;
      }
      p /= 2;
    }
    if(l == b){
      cont++;
      p = i;
      l = 0;
      cout << cont << ") ";
      while(p && l < a){
	if(p % 2 == 1){
	  cout << h[l];
	}
	p /= 2;
	l++;
      }
      cout << endl;
    }
  }
  return 0;
}
