Ring Rotate

You are given a n*m matrix where n are the number of rows and m are the number of columns. You are also given n*m numbers representing the elements of the matrix.
You will be given a ring number 's' representing the ring of the matrix. For details, refer to image.


You will be given a number 'r' representing number of rotations in an anti-clockwise manner of the specified ring.
You are required to rotate the 's'th ring by 'r' rotations and display the rotated matrix.

n=5
m=7
11
12
13
14
15
16
17
21
22
23
24
25
26
27
31
32
33
34
35
36
37
41
42
43
44
45
46
47
51
52
53
54
55
56
57
s=2
r=3


#include<iostream>
#include<vector>

using namespace std;

vector<int> get_ring(vector<vector<int>> &a, int sr, int sc, int er, int ec, int sz) {
    vector<int> ring(sz);
    int k=0;

    for(int i=sr; i<er;i++, k++)
        ring[k]=a[i][sc];

    for(int j=sc; j<ec;j++, k++)
        ring[k]=a[er][j];

    for(int i=er; i>sr;i--, k++)
        ring[k]=a[i][ec];
    
    for(int j=ec; j>sc;j--, k++)
        ring[k]=a[sr][j];

    return ring;
}

void reverse(vector<int> &ring, int s, int e){
    while(s <= e){
        int t = ring[s];
        ring[s] = ring[e];
        ring[e] = t;
        s++, e--;
    }
}

void rotate_ring(vector<int> &ring, int r, int sz){
    r = (r%sz + sz)%sz;
    reverse(ring, 0, sz-1);
    reverse(ring, 0, r-1);
    reverse(ring, r, sz-1);
}

void fill_ring(vector<vector<int>> &a, vector<int> &ring, int sr, int sc, int er, int ec) {
    int k=0;
    for(int i=sr, j=sc; i<er;i++, k++)
        a[i][j]=ring[k];

    
    for(int i=er, j=sc; j<ec;j++, k++)
        a[i][j]=ring[k];

    
    for(int i=er, j=ec; i>sr;i--, k++)
        a[i][j]=ring[k];

    
    for(int i=sr, j=ec; j>sc;j--, k++)
        a[i][j]=ring[k];

}

void ring_rotate(vector<vector<int>> &a, int n, int m, int s, int r){
    int sr=s-1, sc=s-1, er=n-s, ec=m-s;
    int sz=2*(er-sr)+2*(ec-sc);
    vector<int> ring = get_ring(a, sr, sc, er, ec, sz);
    rotate_ring(ring, r, sz);
    fill_ring(a, ring, sr, sc, er, ec);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cout<< a[i][j] << " ";
        cout<< endl;
    }
}


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m, 0));
    for(int i=0; i<n; i++) 
        for(int j=0; j<m; j++)
            cin >> a[i][j];
            
    int s, r;
    cin >> s >> r;
    
    ring_rotate(a, n, m, s, r);
}