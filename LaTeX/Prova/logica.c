#include <stdio.h>
#include <stdbool.h>

bool NOR(bool p, bool q) {
    return !(p || q);
}
int main() {
    for (int p = 0; p < 2; p++)
        for (int q = 0; q < 2; q++) {
            printf("%b ", !p || q);
            printf("%b\n", !(NOR(!p, q)));
        }
}
