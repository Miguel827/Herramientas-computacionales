CXX=g++
CXXFLAGS=-g -std=c++17 -fconcepts
GPROFFLAGS=-pg
CAHCEGRIND_FLAGS=
CALLGRIND_FLAGS=

all: eje.x

%.x: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

gprof: eje.cpp
	$(CXX) $(CXXFLAGS) $(GPROFFLAGS) $< -o eje-gprof.x
	./eje-gprof.x 5000 5000
	grpof ./eje-gprof.x > data.txt

callgrind: eje.x eje.cpp
	valgrind --tool=callgrind ./$< 5000 5000
	callgrind_annotate $$(ls -t callgrind.out.* | head -n 1) > callgrind-info.txt


cachegrind: eje.x eje.cpp
	valgrind --tool=cachegrind ./$< 5000 5000
	cg_annotate --auto=yes $$(ls -t cachegrind.out.* | head -n 1) > cachegrind-info.txt

clean:
	rm -f *.x a.out
