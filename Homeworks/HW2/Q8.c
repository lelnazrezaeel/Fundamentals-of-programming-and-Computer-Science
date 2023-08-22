#include<stdio.h>
int main (){
    long long int n,l,di,ri,gi,a=0,b,c=0,d=0;
    scanf("%lld%lld",&n,&l);
    for (int i=0;i<n;i++){
        scanf("%lld%lld%lld",&di,&ri,&gi);
        b=di;
        di=di-a;
        a=b;
        c=c+di;
        if (c%(ri+gi)<ri)
            c=c+(ri-(c%(ri+gi)));
    }
    d=l-a;
    printf("%lld",c+d);
    return 0;
}