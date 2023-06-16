#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;
    
    int i=1;
    while(i<=n){

        //1st triangle of blanks
        int space = n -i;
        while (space)
        {
            cout<<" ";
            --space;
        }
        //2nd triangle of right 
        int j = 1;
        while(j<=i){
            cout <<"j";
            j++;
        }
        //3rd triangle of left
        int start = i-1;
        while(start){
            cout<<start;
            start++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}