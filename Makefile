QueueDemo: main.o Queue.o Test.o
	g++ -g -Wall -std=c++11 main.o Queue.o Test.o -o QueueDemo
    
main.o: main.cpp 
	g++ -g -std=c++11 -c main.cpp

Test.o: Test.cpp Test.hpp
    g++ -g -std=c++11 -c Test.cpp Test.hpp

clean:
	rm main.o QueueDemo *~
