#include<iostream>
#include <vector>
using namespace std;

void Sorting(vector<int> &Leftarray,vector<int> &Rightarray,vector<int> &array){

     int LASize,RASize,i,j,k;

     LASize=Leftarray.size();
     RASize=Rightarray.size();
     i=j=k=0;
     while(i<LASize && j<RASize){
            if(Leftarray[i]<=Rightarray[j]){
                array[k]=Leftarray[i];
                i=i+1;
            }
            else{
                array[k]=Rightarray[j];
                j=j+1;
            }
             k=k+1;
     }
     while(i<LASize){
          array[k]=Leftarray[i];
          k=k+1;
          i=i+1;
     }
     while(j<RASize){
        array[k]=Rightarray[j];
        k=k+1;
        j=j+1;
     }


}

void margeshort(vector<int> &array){
  int i,j,n,mid;
   n = array.size(); //total array length
   //cout << "n= " << n << endl;

  if(n<2) //smallar then 2 then back
     return;

  mid=n/2; //Marge size L and R
  //cout << "mid= " << mid << endl;

   vector<int> Leftarray;
   vector<int> Rightarray;

  for( i = 0 ; i < mid; i++)
        Leftarray.push_back(array[i]);

   for( j = mid; j < n; j++)
       Rightarray.push_back(array[j]);

   //for(int i = 0 ; i < mid; i++)
         //cout << Leftarray[i] << " " << endl;

   margeshort(Leftarray);
   margeshort(Rightarray);
   Sorting(Leftarray, Rightarray, array);


}

int main(){

    vector<int> array;
    int n,i,Digit ;
    cin >> n; //How many digit

    for(i=0;i<n;i++){
    cin >> Digit;
    array.push_back(Digit); //Pushing digit vector
    }

    margeshort(array);
    cout << "MargeShort= \n";
    for(i=0;i<n;i++){
    cout << array[i] << endl;

    }
return 0;
}
