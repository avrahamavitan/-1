
all: loops recursives recursived loopd mains  maindloop maindrec

mains: main.o recursives
	gcc -Wall -g -o mains main.o libclassrec.a -lm

maindloop: main.o loopd
	gcc -Wall -g -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o recursived
	gcc -Wall -g -o maindrec main.o ./libclassrec.so -lm


loops: main.o basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a main.o basicClassification.o advancedClassificationLoop.o

recursives:main.o basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o main.o advancedClassificationRecursion.o

loopd: main.o basicClassification.o advancedClassificationLoop.o
	gcc -Wall -fPIC -shared -o libclassloops.so main.o basicClassification.o advancedClassificationLoop.o

recursived: basicClassification.o main.o advancedClassificationRecursion.o
	gcc -Wall -fPIC -shared -o libclassrec.so main.o basicClassification.o  advancedClassificationRecursion.o


main.o:NumClass.h
basicClassification.o: NumClass.h
advancedClassificationLoop.o: NumClass.h
advancedClassificationRecursion.o: NumClass.h

.PHONY:clean all

clean:
	rm -f *.a *.o *.so mains maindrec maindloop