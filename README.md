<h1>logr.h</h1><br>

<h3>A micro header to create/view logs for your next <strong>POSIX</strong> thing.BSD LISENCE</h3>
![img](http://flouthoc.github.io/logr.h/logr3.png)


<h4>example.c</h4>

```c
#include <stdio.h>
#include <string.h>
#include "logr.h"

int main(){


	char data[80];
	writeLog("Oops!",NULL,"er");
	return 0;
}
```

<h4>Build statement for example.c (logr.h)</h4>
```bash
gcc test.c logr.c -o test
```
<hr>
<h4> Building logrReader from logrReader.c </h4>
```bash
gcc logrReader.c stack.c parser.c -o logrReader
```
<h3>Using logrReader</h3>
```bash
./logrReader <path-to-log-file>
```

