CC = gcc
CFLAGS = -g -Wall -ansi

extEuclidean: extEuclidean.c
	$(CC) -o extEuclidean extEuclidean.c

clean:
	rm -f extEuclidean
