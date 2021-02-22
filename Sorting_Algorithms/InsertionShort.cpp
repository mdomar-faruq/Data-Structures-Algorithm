#include <iostream>
#include <vector>
using namespace std;

void InsertionSorting( vector<int> &array,int size){
    int i,hole,value;
    for(i=0;i<size-1;i++){
        value=array[i]; // Temporary value select
        hole=i;
        while(hole>0 && array[hole-1]>value){
            array[hole]=array[hole-1];
            hole=hole-1;
        }
        array[hole]=value;
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
    cout << "InsertionSorting= \n";

    InsertionSorting(array,size);
    for(i=0;i<size;i++){
        cout << array[i] << endl;
    }
    return 0;
}
