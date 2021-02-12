// The State Of Wakanda - 2

// The historic state of Wakanda has various monuments and souveniers which are visited by many travellers every day. The guides follow a prescribed route of visiting the monuments which improves them understand the relevance of each monument. The route of the monument is fixed and expressed in a 2-d matrix where the travellers visit the prescribed next monument. For example
// 1  2  3
// 4  5  6
// 7  8  9
// is the prescribed route and the visitors travels this path: 1->2->3->4->5->6->7->8->9
// However, a certain visitor decides to travel a different path as follows:
// 1. The visitor only plans to visit the upper diagonal triangle of the monument list.
// 2. The visitor travels diagonally till there are no more moves left in the current journey. 
// 3. He then visits the adjacent monument to the first monument of current diagonal journey. 
// 4. He continues the same path till all the monuments of the upper half have been travelled.
// For Example:
// The monuments are named as:
// 1    2    3    4
// 5    6    7    8
// 9   10  11  12
// 13 14  15  16
// The path followed by the visitor is: 1->6->11->16->2->7->12->3->8->4
// You are required to print the path followed by the traveller to visit all the monuments.
// Refer to the photo for a better clarification.
// 1. You are given a number n, representing the number of rows and columns of a square matrix.
// 2. You are given n * n numbers, representing elements of 2d array a.
// 3. You are required to diagonally traverse the upper half of the matrix and print the contents.
// For details check image.

// n=4
// 11
// 12
// 13
// 14
// 21
// 22
// 23
// 24
// 31
// 32
// 33
// 34
// 41
// 42
// 43


// 11
// 22
// 33
// 44
// 12
// 23
// 34
// 13
// 24
// 14


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