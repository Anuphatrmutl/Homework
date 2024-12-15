#include <stdio.h>

int main() {
    float height, base, area ;

    printf( "Enter H & W :\n" ) ;
    scanf( "%f %f", &height, &base ) ;

    area = ( height * base ) / 2 ;

    printf( "Triangle Area : %.1f\n", area ) ;

    return 0 ;
}//end main
