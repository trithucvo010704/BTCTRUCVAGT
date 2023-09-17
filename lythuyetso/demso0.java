package lythuyetso;

import java.util.Scanner;


public class demso0 {
    public static long  gt( int n ){
        long dem =1 ; 
        for( int i  = 2 ; i<= n ; i++){
            dem*= i ; 
        }
        return (long)dem ;
        
    }
    public static int dem( long n){
        int res= 0 ;int dem = 0 ; 
        while( n != 0 ){
            if( n %10 == 0 ){
                ++dem ; 
            }
            else dem = 0 ; 
            if( dem >= res ) res = dem ; 
            n/= 10; 
        }
        return res ; 
    }
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        
        int n = sc.nextInt() ;
        System.out.println(dem(gt(n)));
           
    }
}
