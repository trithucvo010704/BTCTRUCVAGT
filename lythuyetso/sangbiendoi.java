package lythuyetso;

import java.util.Scanner;

public class sangbiendoi {
    static int [] a = new int [100001] ; 

    public static void sang(){
        for( int i = 1; i<= 100000 ; i++){
            a[i] = i ; // gan uoc so ngu7yen to nn cua no la chinh no
        }
        for( int i = 2 ; i<= (int)Math.sqrt(100000) ; i++){
            if( a[i] == i ){
                for( int j = i*i ; j<= 100000 ;j+=i){
                    if( a[j] == j ){
                        a[j] = i ; 
                    }
                }

            }
        }
    }
    public static void main(String[] args) {
        Scanner sc =new Scanner ( System.in);
        sang(); 
        int n = sc.nextInt();
        for( int i = 1  ; i<= n ; i++){
            System.out.print(a[i] + " " );
        }

    }
}
