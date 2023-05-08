MAKEOPTS= -Wall -Wextra -pedantic -std=gnu++11 -Wno-unused-parameter
rm=rm -r -f
CLASS=g++ $(MAKEOPTS) -c $< -o $@.o

%: %.cpp %.h
	g++ $(MAKEOPTS) $< -o $@
	
Cagnotte: Cagnotte.cpp Cagnotte.h 
	$(CLASS)
	
Compte: Compte.cpp Compte.h
	$(CLASS) 
	
ShareCount: ShareCount.cpp ShareCount.h Compte.o Cagnotte.o 
	$(CLASS) 
	
test: tests.cpp Cagnotte.o Compte.o ShareCount.o
	g++ $(MAKEOPTS) $< -o $@ Cagnotte.o Compte.o ShareCount.o -lcrypt

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
