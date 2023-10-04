#include <iostream>

using namespace std;

int main()
{
    int n,count=0,j;
    cin>>n;
    int array[n];
    
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    
    for(int i=0; i<n; i++){
        count=0;
        for(int j=0; j<n; j++){
            if(array[i]==array[j] && i!=j){
            count++;
            //continue;
        }
        }if(count==0){
            cout<<array[i];
        }
            
    }
        
    return 0;
}