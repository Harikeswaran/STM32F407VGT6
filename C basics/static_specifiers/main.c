#include <stdio.h>

void file1_myFunc1(void);

static int mainPrivatetoData;

int main()
{
    mainPrivatetoData = 100;
    
    printf("mainPrivatetoData=%d\n",mainPrivatetoData);
    
    file1_myFunc1();
    
      printf("mainPrivatetoData=%d\n",mainPrivatetoData);
      
    return 0;
}


static void change_system_clock(int system_clock)
{
        printf("system clock changed to = %d\n",system_clock);
}
