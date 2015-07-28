makefile:
DEL_LIST = *.o *.exe *stackdump

all: build doc
clean:
	rm -f $(DEL_LIST)
build: 
	g++ -c -Wall -pedantic *.cpp
	g++ -o ueb14 *.o
build11: 
	g++ -c -Wall -pedantic *.cpp -std=c++11
	g++ -o ueb14 *.o
doc: 
	/Applications/Doxygen.app/Contents/Resources/doxygen
docmac: 
	/Applications/Doxygen.app/Contents/Resources/doxygen
rebuild: clean all

testbuild: 
	g++ -c *.cpp 
	g++ -o ueb14 *.o
	
testbuild11: 
	g++ -c *.cpp -std=c++11
	g++ -o ueb14 *.o
