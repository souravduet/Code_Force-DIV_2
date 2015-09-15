#include <bits/stdc++.h>

using namespace std ;

#define vi vector<int>
#define vvi vector < vi >
#define vb vector<bool>
#define pb push_back		// for hujur :P
#define imax 1023456789
#define tol 1e-12

vi arr ;
vi brr ;
vi divs ;

long long process( long long a , vi & v ) {

	for( int i = 0 ; i < divs.size() ; i ++ ) {
		int cnt = 0 ;

		while( ( a % divs[ i ] ) == 0 ) {
			cnt ++ ;
			a /= divs[ i ] ;
		}

		v.push_back( cnt ) ;
	}

	return a ;
}

int myabs( int val ) {
	if( val < 0 ) return -val ;
	return val ;
}

int giveRes() {
	int ret = 0 ;

	for( int i = 0 ; i < 3 ; i ++ ) {
		ret += myabs( arr[ i ] - brr[ i ] ) ;
	}

	return ret ;
}

int main() {

	long long a , b ;

	cin >> a >> b ;

	divs.push_back( 2 ) ;
	divs.push_back( 3 ) ;
	divs.push_back( 5 ) ;

	long long x = process( a , arr ) ;
	long long y = process( b , brr ) ;

	if( x != y ) {
		cout << -1 << endl ;
	}

	else {
		int res = giveRes() ;

		cout << res << endl ;
	}

	return 0 ;
}
