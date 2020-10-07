#ejemplo del makefile con sumas.cpp,
#sumas.cpp hace una suma de dos formas distintas y grafica
#la diferencia que hay entre ambas así f(x)=|1-s1/s2|

#@ significa target
#^ significa todas las dependencias
#< significa primera dependencia

all: fig.pdf
#en %.cpp está sumas.cpp que es el código del que se extraen los datos
%.x: %.cpp 
	g++ $< -o $@
#datos.txt es el documento que tiene los datos calculados en sumas.cpp
datos.txt: sumas.x
	./$< > $@
#plot.py es el codigo que toma los datos.txt y los grafica en la fig.pdf
fig.pdf: plot.py datos.txt
	python3 $<
#con clean remuevo todos las cosas que le indique
clean:
	rm -f a.out *.x datos.txt fig.pdf
