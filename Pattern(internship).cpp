#include <iostream>
using namespace std;

void pattern(int n)
{
    int i,j,count=0;
    for (i=1;i<(n*2);i++) {
    	for (j=1;j<=n;j++) {
	 		if(count>=j){
                cout<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<"\n";
        if(i>=n){
        	count--;
        }else{
        	count++;
        }
    }
}
 
int main()
{
    int n=7;
    pattern(n);
    return 0;
}
