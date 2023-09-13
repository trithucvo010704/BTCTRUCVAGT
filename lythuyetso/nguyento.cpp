#include<bits/stdc++.h> 
using namespace std; 

typedef long long  ll ;
inline ll gcd( ll a, ll b ){ll r ; while(b){r = a % b ; a= b ; b =r ;} return a ;} 
// bool songuyento( int n ){
//     for( int i =2 ; i<= sqrt(n); i++ ){
//         if( n%i == 0 ){
//             return false ; 
//         }
//     }
//     return n>1  ; 
// }
int a[10001] ; 
void Sang(){
    for( int i = 0 ; i<= 10000;i++){a[i] =1  ; }
    a[0]=a[1] = 0 ; 
    for( int i = 2 ; i<= 100 ; i++ ){
        if( a[i] ==1){
            for( int j = i* i ; j <= 10000 ; j+= i ){
                a[j] = 0 ; 
            }
        }
    }
}
bool check( int n ){
    for( int i = 2; i<= sqrt( n ); i++ ){
        if( n%i == 0 ){
            return false ;
        }
    }
    return n> 1; 
}
bool chusonguyento( int n ){
    while( n){
        int m  = n%10 ; 
        if( m!=2 && m!= 3  && m != 5 && m!= 7 ){
            return false ; 
        }
        n/= 10 ; 
    }
    return true ; 
}
// cong thuc n phan tu so nguyen to cua n : n/ ln(n) 
int main(){
   
    int t ; cin >>t ;  Sang() ; 
    while( t--){
        int a,b ; 
        cin >> a >> b ; 
        int cnt = 0 ;
        for( int i = a ; i<= b ;i++){
            if(check(i) &&  chusonguyento(i)){
                for( int j = 2; j<= i/2 ;j++){
                    if( check(j) &&check(i-j)){
                        cnt++;
                    }
                }
            }
             
        }
        cout << cnt ; 
        
    }
}