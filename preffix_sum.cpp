#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int pre[n+1];
    pre[0]=A[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+A[i];
    }
    int q;
    cin>>q;
    while(q--){
      int l,r;
      cin>>l>>r;
      if(l==0)cout<<pre[r]<<'\n';
      else{
        cout<<pre[r]-pre[l-1]<<'\n';
      }
    }
    return 0;
}
