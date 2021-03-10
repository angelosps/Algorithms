// Segment Tree with Lazy Propagation

#include <bits/stdc++.h>

#define INF 10000000

using namespace std;

struct tree{
    int value;
    int lazy;
};

int arr[100000];
tree seg[400000];

void build(int s, int e, int idx){
    if(s==e){
        seg[idx].value=arr[s];
        seg[idx].lazy=0;
        return;
    }

    int mid=(s+e)/2;
    build(s, mid, idx*2);
    build(mid+1, e, idx*2+1);
    seg[idx].value=min(seg[idx*2].value, seg[idx*2+1].value);
}

void update(int s, int e, int us, int ue, int k, int idx){
    if(s>=us && e<=ue){
        seg[idx].lazy+=k;
        seg[idx].value+=k;
        return;
    }
    else if(e<us || s>ue) return;

    seg[idx*2].lazy+=seg[idx].lazy;
    seg[idx*2+1].lazy+=seg[idx].lazy;
    seg[idx*2].value+=seg[idx].lazy;
    seg[idx*2+1].value+=seg[idx].lazy;
    seg[idx].lazy=0;

    int mid=(s+e)/2;
    update(s, mid, us, ue, k, idx*2);
    update(mid+1, e, us, ue, k, idx*2+1);

    seg[idx].value=min(seg[idx*2].value, seg[idx*2+1].value);
}

int query(int s, int e, int qs, int qe, int idx){
    if(s>=qs && e<=qe)
        return seg[idx].value;
    else if(e<qs || s>qe) return INF;

    seg[idx*2].value+=seg[idx].lazy;
    seg[idx*2+1].value+=seg[idx].lazy;
    seg[idx*2].lazy+=seg[idx].lazy;
    seg[idx*2+1].lazy+=seg[idx].lazy;
    seg[idx].lazy=0;

    int mid=(s+e)/2;

    int p1=query(s, mid, qs, qe, idx*2);
    int p2=query(mid+1, e, qs, qe, idx*2+1);
    return min(p1, p2);
}

int main( void ) {

    int n; cin>>n;

    for(int i=0; i<n; i++) cin>>arr[i];

    build(0, n-1, 1);

    printf("Input range you want to find the smallest element within\n");
    int l, r, k; scanf("%d %d", &l, &r);

    printf("Smallest item in range [%d, %d] is: %d\n", l, r, query(0, n-1, l-1, r-1, 1));

    printf("Input the integer to be added in the given range\n"); scanf("%d", &k);

    update(0, n-1, l-1, r-1, k, 1);

    printf("Smallest item in the same updated range [%d, %d] is: %d\n", l, r, query(0, n-1, l-1, r-1, 1));

    return 0;
}
