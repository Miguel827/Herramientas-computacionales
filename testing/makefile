
all: 2.x

test: test.x test-catch2.x test-googletest.x #preguntamos por el ejecutable test.x

%.o: %.cpp %.h #esto toma todo lo .cpp y lo compila con bandera -c
	g++ -c $<

2.x: ejem1.o funcion-ejem1.o
	g++ $^ -o $@

test.x: ejem1-test.o funcion-ejem1.o
	g++ $^ -o $@

test-catch2.x: funcion-ejem1.o test-catch2.o #aquí esta test.x y depende de .o
	g++ $^ -o $@
test-googletest.x: funcion-ejem1.o test-googletest.o
	g++ $^ -o $@ -lgtest
clean:
	rm -f *.x a.out *.o 
