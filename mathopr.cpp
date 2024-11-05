#include<iostream>

using namespace std;

int main() {
	
	int M, N, K;
	cin >> M >> N >> K ;
	
	int arr1[M][N], arr2[N][K] ;
	
	for( int i = 0 ; i < M ; i ++ ) {
		for( int j = 0 ; j < N ; j ++ ) {
			cin >> arr1[i][j] ;
			
		}		
	}
	
	cout << endl << "first is done\n" ;
	
	for( int i = 0 ; i < N ; i ++ ) {
		for( int j = 0 ; j < K ; j ++ ) {
			cin >> arr2[i][j] ;
			
		}		
	}
	
	int arr3[M][K] ;
	
	for( int i = 0 ; i < M ; i ++ ) {
		for( int j = 0 ; j < K ; j ++ ) {
			
			arr3[i][j] = 0 ;
			
			for( int m = 0 ; m < N ; m ++ )	{
				
				arr3[i][j] += arr1[i][m]*arr2[m][j] ;
				
				
			}
		}
	}
	
	cout << endl << endl ;
	
	for( int i = 0 ; i < M ; i ++ ) {
		for( int j = 0 ; j < K ; j ++ ) {
			
		cout << arr3[i][j] << " " ;	
			
		}
		
		cout << endl ;
	}
	
	
}
