# Makefiles

Here’s a dead simple `Makefile`:

```
CC = g++
CFLAGS = -Wall -std=c++14
DEBUG = -g
PNAME = myprogramname
FILES = main.cpp


all: $CC $CFLAGS $FILES -o $PNAME

debug: $CC $CFLAGS $FILES $DEBUG -o $PNAME

clean:
	rm -rf $PNAME
```

**NOTE** 

To avoid having to specify file names in `all` and `debug` repetitively, use a variable e.g. `FILES`.