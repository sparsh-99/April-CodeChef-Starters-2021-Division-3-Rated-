#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--!=0){
        int x,y,x_r,y_r,d;
        cin>>x>>y>>x_r>>y_r>>d;
        
        float food = x/x_r;
        float water = y/y_r;

        float days = min(food, water);

        if(days>=d)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl; 
    }
}
