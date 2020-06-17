CFLAGS = -march=skylake-avx512 -O3

.PHONY: all clean

all: t

t: t.o foo.o

clean:
	rm -f t.o foo.o t
