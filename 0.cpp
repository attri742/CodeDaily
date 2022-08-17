#include<iostream>
using namespace std ;

long long divisible_subarr(long long arr[],int N){
    long long freq[N] ;
	memset(freq , 0 , N*sizeof(long long)) ;
    
    int csum = 0 ;
    freq[0] = 1 ;
    for(int i = 0 ; i < N ; i++){
        csum += arr[i] ;
        freq[((csum % N) + N) % N]++ ;
    }
    
    long long count = 0 ;
    for(int i = 0 ; i < N ; i++){
        long long x = freq[i] ;
        if(x >=2){
           count += (x*(x-1))/2 ;
        }
    }

    return count ;

}
int main() {
    int t ; 
	cin >> t ;
    while(t > 0){
        int  N ;
        cin >> N ;

        long long arr[N] ;

        for(int i = 0 ; i < N ; i++){
             cin >> arr[i] ;
        }

        cout << divisible_subarr(arr , N) ;
        cout << endl ;

        t-- ;
    }


    return 0;
}