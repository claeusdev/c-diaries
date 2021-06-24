#include <stdio.h>

int main(){
    
    enum Company {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("Xerox: %d\n", xerox);
    printf("Google: %d\n", google);
    printf("Ebay: %d\n", ebay);

    return 0;
}