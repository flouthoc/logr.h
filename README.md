<h1>logr.h</h1><br>

<h3>A micro header to create/view logs for your next <strong>POSIX</strong> thing.BSD LISENCE</h3><br>
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
```<br><br>
<hr>
<h1>Building logrReader</h1>
```bash
gcc logrReader.c stack.c parse.c -o logrReader
```

<h3>Using logrReader</h3>
```bash
./logrReader <path-to-your-log_file>
```
<br><br>
<h2>Fork it!<h2>
<hr>
flouthoc@gmail.com
