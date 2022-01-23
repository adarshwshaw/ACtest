# ACtest

A simple testing framework for c.

Usage:

```
#include "../src/actest.h"

ACTest(inttest) {
    assertI(5,5);
}
ACTest(floattest) {
    assertD(5.5,5.5);
}
ACTest(stringtest) {
    assertS("heelo","sdarad");
}
ACTest(longtest) {
    assertL(2143l,234423l);
}
ACTest(chartest) {
    assertC('a','a');
}

ACTSetup {
    ACTRegister(inttest);
    ACTRegister(floattest);
    ACTRegister(stringtest);
    ACTRegister(longtest);
    ACTRegister(chartest);
}
```

**Link the lib file with your code** 