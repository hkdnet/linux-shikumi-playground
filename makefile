all: bin/mmap bin/cow

bin/mmap: mmap.c
	gcc -o bin/mmap -Wall mmap.c
bin/cow: cow.c
	gcc -o bin/cow -Wall cow.c

.PHONY: all
