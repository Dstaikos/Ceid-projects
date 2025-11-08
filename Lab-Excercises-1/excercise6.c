#include <stdio.h>

int main() {
    unsigned int a, b, c, d, e, f;

    // Ask the user to input the MAC adress
    printf("Give MAC address (format xx:xx:xx:xx:xx:xx): ");
    scanf("%x:%x:%x:%x:%x:%x", &a, &b, &c, &d, &e, &f);

    // check if thee address is broadcast
    if (a == 0xFF && b == 0xFF && c == 0xFF && d == 0xFF && e == 0xFF && f == 0xFF) {
        printf("The address is BROADCAST");
        return 0;
    }
    // check if the address is unicast or multicast
    else if (a % 2 == 0) {
        printf("The address is UNICAST");
    } else {
        printf("The address is MULTICAST");
    }

    return 0;
}
