// sleep()
// Example 1

#include <stdio.h>  
#include <unistd.h>  
  
int main() {  
    printf("This message will appear immediately.\n");  
    sleep(3); // Pause for 3 seconds  
    printf("This message will appear after a 3-second delay.\n");  
    return 0;  
}  

/*Output:

This message will appear immediately.
This message will appear after a 3-second delay.

*/
