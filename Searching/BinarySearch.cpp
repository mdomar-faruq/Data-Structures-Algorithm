/* Binary Search
Three Case: (algo)

  Case1-> X==A[mid]
  Case2-> X< A[mid]
  Case3-> X> A[mid]

 ---Input----
5
3 1 2 4 5
2
Output->Index: 3  value: 2
*/

#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &array,int size,int search){
    int start,end,mid;
    start = 0; end = size;

    while(start<=end){
        mid=(start+end)/2;
        if(array[mid]==search){
            return mid;
        }
        else if(search<array[mid]){
            end=mid-1;
        }
        else{
                start=mid+1;
        }
    }
    return -1;

}

int main(){

    vector<int> array;
    int i,size,Digit, search;
    cout << "Size= \n";
    cin >> size;

    for(i=0;i<size;i++){
       cin >> Digit;
       array.push_back(Digit);
    }
    cout << "Searching= \n";
    cin >> search;

   int result=BinarySearch(array,size,search);
   if(result == -1){
    cout << "Not Exict value";
   }else{
       cout << "Index= " << result+1 << " value= " << search << endl;
   }

return 0;
}
