loops:mains.o basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a mains.o basicClassification.o advancedClassificationLoop.o

recursives: basicClassification.o mains.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o mains.o advancedClassificationRecursion.o

recursived:basicClassification.o mains.o advancedClassificationRecursion.o
	gcc -shared -o libclassrec.so basicClassification.o mains.o advancedClassificationRecursion.o

loopd:mains.o basicClassification.o advancedClassificationLoop.o
	gcc -shared -o libclassloops.so mains.o basicClassification.o advancedClassificationLoop.o


mains:mains.o recursives
	gcc -Wall -g -o mains mains.o libclassrec.a

maindloop: mains.o recursived
	gcc -Wall -g -o maindloop mains.o ./libclassloops.so

maindrec:mains.o recursives
	gcc -Wall -g -o maindrec mains.o ./libclassrec.so

all:loops loopd recursived recursives mains maindrec maindloop

mains.o:NumClass.h
basicClassification.o: NumClass.h
advancedClassificationLoop.o: NumClass.h
advancedClassificationRecursion.o: NumClass.h

clean:
	rm -f *.a *.o *.so mains maindrec maindloop