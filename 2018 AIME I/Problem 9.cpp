#include <iostream>

using namespace std;

int main() {
  
  int num = 0;
  for(int i = 1; i <= 20; i++){
    for(int j = i+1; j <= 20; j++){
      for(int k = j+1; k <= 20; k++){
        for(int m = k+1; m <= 20; m++){
          if(i+j==16 || i + k == 16 || i + m == 16 || j + k == 16
          || j + m == 16 || k + m == 16){
            if(i+j==24 || i+k==24 || i+m==24 || j+k==24 || j+m == 24 || k+m==24){
              num++; 
            }
          }
        }
      }
    }
  }
  cout << num << endl;
  
}
