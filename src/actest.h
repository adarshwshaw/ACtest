#ifndef _ACTEST_H_
#define _ACTEST_H_

typedef void (*Ctest)();

typedef struct {
    char cTestName[15];
    Ctest test;
} acTest;

#define ACTSetup void actSetup()
#define ACTRegister(X) actRegister(X,#X)
#define ACTest(X) void X()

void actSetup();
void actRegister(Ctest test,const char* cTestName);

void assertI(int exp, int act);
void assertD(double exp, double act);
void assertL(long long exp, long long act);
void assertS(const char* exp, const char* act);
void assertC(char exp, char act);

#endif //_ACTEST_H_