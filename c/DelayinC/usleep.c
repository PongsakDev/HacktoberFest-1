// usleep()
// Example

#include <stdio.h>  
#include <unistd.h>  
  
int main() {  
    printf("This message will appear instantly\n");  
    usleep(1000000); // Pause for 1 second (1,000,000 microseconds)  
    printf("This message will be displayed one second after a delay. \n");  
    return 0;  
}  

/* output
This message will appear instantly
This message will be displayed one second after a delay.
*/


