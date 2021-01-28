/* Linear search
All Index check ,if found print
*/

#include<stdio.h>
int search(int n,int s,int array[]);

int main(){

    int n,s,i,array[20];
    printf("Linear Search how many Input:\n");
    scanf("%d",&n);
    printf("Input Number:\n");
    for(i=0;i<n;i++){
    scanf("%d",&array[i]);
    }
    printf("Which Input Number to Search:\n");
    scanf("%d",&s);
    int ree=search(n,s,array);
    if(ree==-1){
        printf("Not Found in array Input");
    }else
        printf("%d at present location %d",array[ree],ree+1);

return 0;
}

int search(int n,int s,int array[]){

    int tem,i;
    tem=s;
    for(i=0;i<n;i++){
        if(array[i]==tem){
         return i;
        }
    }
return -1;
}
