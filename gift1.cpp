/*
ID: chessdh1
TASK: gift1
LANG: C++14            
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int n;
    fin >> n  ; 
    map < string , int > m ; m.clear() ; 
    string a[n+1] ;  
    for(int i=1 ; i<= n ; i++) {
        string s; fin >> s;
        m[s] = 0 ;
        a[i] = s; 
    }
    for(int i=1 ; i<= n ; i++) {
        string s ; fin >> s ; 
        int total , vag ; 
        fin >> total >> vag ; 
        if(vag == 0) continue ; 
        int each = total / vag ; 
        m[s] -= total ; 
        m[s] += (total - (each*vag) ) ;
        for(int j=1 ; j <= vag ; j++) {
            string ss; fin >> ss ; 
            m[ss] += each ; 
        }   
    }
    for(int i=1 ; i<= n ; i++) {
        fout << a[i] << " " << m[a[i]] << endl;
    }
    
    return 0;
}