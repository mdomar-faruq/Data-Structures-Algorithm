#include <iostream>
#include<vector>
using namespace std;

void BubbleShort( vector<int> &array,int size){
    int k,i,flag;
    for(k=0;k<size-1;k++){
    flag=0;
      for(i=0;i<size-k-1;i++){
        if(array[i]>array[i+1]){
            swap(array[i],array[i+1]);
            flag=1;
        }
       }
    if(flag==0)break;
    }
}

int main(){
    vector<int> array;
    int size,i,Digit;
    cout << "Size= " ;
    cin >> size;
    for(i=0;i<size;i++){
        cin >> Digit;
        array.push_back(Digit);
    }
  cout << "Bubble Short= \n" ;
  BubbleShort(array,size);
    for(i=0;i<size;i++){
     cout << array[i] << endl;
    }

return 0;
}
