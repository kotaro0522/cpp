//#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    //cin >> n;
    scanf("%d",&n);
    int* a = new int[n];
    for(int i = 0; i < n; i++){
      //cin >> a[i];
      scanf("%d",&a[i]);
    }

    int zero = 0;

    for(int i = 0; i < n; i++){
      int total = 0;
      for(int j = i; j < n; j++){
        total += a[j];
        if(total == 0){
          zero++;
        }
      }
    }
    //cout << zero << endl;
    printf("%d\n", zero);
    return 0;
}
