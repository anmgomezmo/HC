# activate optimization level 2

#CXXFLAGS=-02 -Wall 

all: sumas.x datos.txt fig.pdf

sumas.x : errorsum.cpp
	g++ $< -o $@  #$(CXXFLAGS)

datos.txt : sumas.x 
	./$< > $@

fig.pdf : plot.gp datos.txt
	gnuplot $<

.PHONY : clean
clean :
	rm -f sumas.x datos.txt fig.pdf
