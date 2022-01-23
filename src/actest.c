#include "actest.h"
#include "string.h"
#include <stdio.h>

#define MAX_TEST_CAP 10
#define ACTPASS 1
#define ACTFAIL 0

static acTest tests[MAX_TEST_CAP];
static int testidx = 0;
void actRegister(Ctest test,const char* cTestName){
    acTest t;
    memcpy(t.cTestName,cTestName,14);
    t.test = test;
    tests[testidx++] = t;
}

int main(int argc,char* argv[]){

    actSetup();
    for (int i =0; i<testidx;i++){
        printf("%s\n",tests[i].cTestName);
        tests[i].test();
    }
    return 0;
}

void assertI(int exp, int act){
    int x = (exp == act) ? ACTPASS : ACTFAIL ;
    printf ("Assertion : %s \n Expected : %d \n Actual : %d\n",(x == ACTPASS)? "Passed" : "Failed", exp,act);
}
void assertD(double exp, double act){
    int x = (exp == act) ? ACTPASS : ACTFAIL ;
    printf ("Assertion : %s \n Expected : %f \n Actual : %f\n",(x == ACTPASS)? "Passed" : "Failed", exp,act);
}
void assertL(long long exp, long long act){
    int x = (exp == act) ? ACTPASS : ACTFAIL ;
    printf ("Assertion : %s \n Expected : %lld \n Actual : %lld\n",(x == ACTPASS)? "Passed" : "Failed", exp,act);
}
void assertS(const char* exp, const char* act){
    int x = (!strcmp(exp,act)) ? ACTPASS : ACTFAIL ;
    printf ("Assertion : %s \n Expected : %s \n Actual : %s\n",(x == ACTPASS)? "Passed" : "Failed", exp,act);
}
void assertC(char exp, char act){
    int x = (exp == act) ? ACTPASS : ACTFAIL ;
    printf ("Assertion : %s \n Expected : %c \n Actual : %c\n",(x == ACTPASS)? "Passed" : "Failed", exp,act);
}