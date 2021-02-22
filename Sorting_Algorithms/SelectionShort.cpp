#include<iostream>
#include<vector>
using namespace std;

void SelectionShorting(vector<int> &array,int size){

int i,j,imin;
for(i=0;i<size-2;i++){
    imin=i;
    for(j=i+1;j<size-1;j++){
        if(array[j]<array[imin]){
            imin=j;
        }
    } swap(array[i],array[imin]);
}
}

int main(){
vector<int> array;
    int size,Digit,i;
    cout << "Size=";
    cin >> size;
    cout << "Enter number= \n";
    for(i=0;i<size;i++){
        cin >> Digit;
        array.push_back(Digit);
    }
    cout << "SelectionShorting= \n";
    SelectionShorting(array,size);
    for(i=0;i<size;i++){
        cout << array[i] <<endl;
    }
}
