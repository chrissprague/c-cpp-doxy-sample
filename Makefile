
default: example.h example2.h example.cpp
	g++ -std=c++11 example.cpp -o example

docs:
	doxygen Doxyfile

clean:
	rm -f example
	rm -r html/

