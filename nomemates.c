#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void handleSignal(int signal){
    printf("jajaja no me matas %d\n",signal);
}

int main(){
    signal(2,handleSignal);
    while(1){
        prinf("Trabajando \n");
        sleep(1);
    }
    return 0;
}