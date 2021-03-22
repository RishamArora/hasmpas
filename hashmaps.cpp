#include <iostream>
#include<unordered_map>
using namespace std;

int lengthOfLongestSubsetWithZeroSum(int* arr, int size);

int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << lengthOfLongestSubsetWithZeroSum(arr, size);

    delete[] arr;
}
int lengthOfLongestSubsetWithZeroSum(int* arr, int size){
  
  
 unordered_map<int,int> map;
    map[0]=0;
   // int index=0,
    int sum=0,max_len=0;
    for(int i=0;i<size;i++){
        // int oindex=map[sum]; 
        sum+=arr[i];
        if (sum == 0) 
            max_len = 1 ; 
       if(map.count(sum)>0){
                       max_len = max(max_len, i - map[sum]); 
       }else 
           map[sum]=i;
    //     map[sum]=index;
    //     index++;
    }
        return max_len; 

}
