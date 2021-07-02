#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n){
  if(n<=1) {
    return false;
  }
  for(int i = 2; i<n; i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}

int main(){
  int count = 100;
  for(int i = 3; i < count; i++){
    bool prime = isPrime(i);
    if(prime){
      printf("%d ", i);
    }
  }
  return 0;
}
