FNS=complex.cpp
MAIN=main.cpp $(FNS)
all:
	g++ $(MAIN) -o run_test
clean:
	rm run_test
