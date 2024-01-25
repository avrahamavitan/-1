loops:main.o basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a main.o basicClassification.o advancedClassificationLoop.o

recursives: basicClassification.o main.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o main.o advancedClassificationRecursion.o

recursived:basicClassification.o main.o advancedClassificationRecursion.o
	gcc -shared -o libclassrec.so basicClassification.o main.o advancedClassificationRecursion.o

loopd:main.o basicClassification.o advancedClassificationLoop.o
	gcc -shared -o libclassloops.so main.o basicClassification.o advancedClassificationLoop.o


mains:main.o recursives
	gcc -Wall -g -o mains main.o libclassrec.a

maindloop: main.o recursived
	gcc -Wall -g -o maindloop main.o ./libclassloops.so

maindrec:main.o recursives
	gcc -Wall -g -o maindrec main.o ./libclassrec.so

all:loops loopd recursived recursives mains maindrec maindloop

main.o:NumClass.h
basicClassification.o: NumClass.h
advancedClassificationLoop.o: NumClass.h
advancedClassificationRecursion.o: NumClass.h

clean:
	rm -f *.a *.o *.so mains maindrec maindloop