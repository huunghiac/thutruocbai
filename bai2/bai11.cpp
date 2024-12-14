#include <iostream>
#include <vector>
using namespace std;

int64_t tongdayso(int64_t a, int64_t b){
    return int64_t((a+b)*(a-b+1)/2);
}

int main()
{
    int64_t n,k,m1=0,m2=0,ck=0,hp=0,t=0,tdm1;
    cin>>n>>k;
    vector<int64_t> a(n);
    for(int64_t i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>m1)
        {
            m1=a[i];
            tdm1=i;
        }
    }
    for(int64_t i=0;i<n;i++){
        if(a[i]>m2&&i!=tdm1) m2=a[i];
    }

    if(n==1){
        for(int64_t i=0;i<k;i++){
            hp+=a[0];
            a[0]--;
            if(a[0]==0) {
                cout<<hp;
                return 0;
            }
        }
        cout<<hp;
        return 0;
    }

    if(k==1){
        cout<<m1;
        return 0;
    }

    ck=k/(m1-m2+1);
    hp=tongdayso(m1,m2)*ck;
    k-=ck*(m1-m2+1);
    for(int64_t i=0;i<k;i++)
    {
        hp+=m1;
        m1--;
    }

    cout<<hp;
    return 0;
}
