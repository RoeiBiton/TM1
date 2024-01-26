
CC = gcc
CFLAGS = -Wall -g
OBJ_R= advancedClassificationRecursion.o basicClassification.o
OBJ_L= advancedClassificationLoop.o basicClassification.o 

.PHONY: all clean

all:loopd maindrec maindloop mains recursives recursived loops

# Create static library
loops: libclassloops.a

# Create dynamic library
loopd: libclassloops.so

# Create static library
recursives: libclassrec.a

# Create dynamic library
recursived: libclassrec.so

# Create main with static recursive
mains: main.o libclassrec.a 
	$(CC) $(CFLAGS) main.o ./libclassrec.a -o mains

# Create main with dynamic recursive
maindrec: main.o libclassrec.so 
	$(CC) $(CFLAGS) main.o ./libclassrec.so -o maindrec
		
# Create main with dynamic loops
maindloop: main.o libclassloops.so 
	$(CC) $(CFLAGS) main.o ./libclassloops.so -o maindloop

# Compile main.c
main.o: main.c NumClass.h
	$(CC) $(CFLAGS) -c main.c

# Create static library
libclassloops.a: $(OBJ_L)
	ar rcs $@ $^

# Create dynamic library
libclassloops.so: $(OBJ_L)
	$(CC) -shared -fpic -o $@ $^

# Create dynamic library
libclassrec.a: $(OBJ_R)
	ar rcs $@ $^

# Create dynamic library
libclassrec.so: $(OBJ_R)
	$(CC) -shared -fpic -o $@ $^

# Include NumClass
%.o: %.c NumClass.h
	$(CC) $(CFLAGS) -c $<

# Clean all
 clean:
	rm -f *.o *.a *.so mains maindrec maindloop