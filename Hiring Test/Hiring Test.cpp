#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--!=0){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        char a[n][m];

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        }
        for(int i=0;i<n;i++){
            int f=0,p=0,u=0;
            for(int j=0;j<m;j++){
                if(a[i][j]=='F')
                    f++;
                else if(a[i][j]=='P')
                    p++;
                //else u++;
            }
            if(f>=x || ((f>=(x-1)&&p>=y)))
                cout<<"1";
            else cout<<"0";
        }
        cout<<endl; 
    }
}
