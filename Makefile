CC=gcc
AR=ar
OBJECTS_MAIN=main.o
FLAGS =-Wall -g

make_all: mains maindloop maindrec libclassloops.a libclassrec.a libclassrec.so libclassloops.so

mains:libclassrec.a main.o
	 $(CC) $(FLAGS) -o mains main.o libclassrec.a

maindloop: libclassloops.so
	 $(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so

maindrec: libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so

libclassloops.a: advancedClassificationLoop.o basicClassification.o
	$(AR) -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o

libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	  $(AR) -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o

libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	 $(CC) -shared libclassrec.so advancedClassificationRecursion.o basicClassification.o

libclassloops.so: advancedClassificationLoop.o basicClassification.o
	$(CC) -shared libclassloops.so advancedClassificationLoop.o basicClassification.o

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

main.o: main.c NumClass.h
	 $(CC) $(FLAGS) -c main.c

.PHONY: make_clean make_all mains maindloop maindrec
make_clean:
	rm -f *.o *.a *.so mains maindloop maindrec

