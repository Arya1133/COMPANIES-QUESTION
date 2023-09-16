//#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    
   int nums[8]={-2,-3,4,-1,-2,1,5,-3};
   int sum=0;
   int max=nums[0];
   for(int i=0;i<4;i++){ 
      sum=sum +nums[i];
      if(sum>max){
         max=sum;
      }
      if(sum<0){
         sum=0;
      }
   }
   cout<<max;
}