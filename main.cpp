#include<iostream>
#include <vector>
#include <numeric>

using namespace std;

int maxSequence(const vector<int>& arr){
   vector<int>::const_iterator ite_a,ite_b;
   int sum=0;
   for (ite_a=arr.begin();ite_a<arr.end();ite_a++)
   {
      for (ite_b=ite_a;ite_b<=arr.end();ite_b++)
      {
         sum= accumulate(ite_a,ite_b,0)>sum?accumulate(ite_a,ite_b,0):sum;   
      }
   }
   return sum;
}

int main()
{  vector<int> arr={-21, -12, -16, -14, 11, -16, 29, -2, -2, 1, -30, 26, -2, 28, -1, 4, -19, -28, -9, 4, -15, 15, -13, 13, -25, 11, 18, 16, -10, 12, -16, 17, 3, -21, 17, -20, 27, 22, -12, 22, -7, 13, 14, 7, 3, 25, 16, 9, -30, 25};
  //   vector<int> arr={11, 18, 16, -10, 12, -16, 17, 3, -21, 17, -20, 27, 22, -12, 22, -7, 13, 14, 7, 3, 25, 16};
   cout << maxSequence(arr)<<endl;
   return 0;
}
