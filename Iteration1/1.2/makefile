MAKEOPTS= -Wall -Wextra -pedantic -std=gnu++11 -Wno-unused-parameter
rm=rm -r -f
CLASS=g++ $(MAKEOPTS) -c $< -o $@.o

%: %.cpp %.h
	g++ $(MAKEOPTS) $< -o $@
	
Cagnotte: Cagnotte.cpp Cagnotte.h 
	$(CLASS)
	
test: tests.cpp Cagnotte.o 
	g++ $(MAKEOPTS) $< -o $@ Cagnotte.o -lcrypt

run:
	./test
	
	
clean:
	$(rm) makefile.*
	$(rm) doxyfile 
	$(rm) html 
	$(rm) latex
	$(rm) *.h.*
	$(rm) *.cpp.*
	$(rm) *.o
	$(rm) test

doc:
	doxygen -g
	doxygen
	
clean_doc:
	rm -rfd --preserve-root ./html
	rm -rfd --preserve-root ./latex
