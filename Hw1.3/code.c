#include <stdio.h>

int main() {
    char firstName[30], lastName[30] ;

    printf( "First Name: " ) ;
    scanf( "%s", firstName ) ;

    printf( "Last Name: " ) ;
    scanf( "%s", lastName ) ;

    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand\n", firstName, lastName ) ;

    return 0 ;
}//end main
