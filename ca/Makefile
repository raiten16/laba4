CC = g++
CFLAGS = -Wall -Wextra -std=c++11
LDFLAGS = -lm

OBJECTS = main.o calculator.o
EXECUTABLE = calculator_app
LIBRARY = libcalculator.a

all: measure_time

measure_time: $(OBJECTS)
	@echo "Building $(EXECUTABLE)..."
	@start=$$(date +%s%N); \
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJECTS) $(LDFLAGS); \
	end=$$(date +%s%N); \
	elapsed=$$(( (end - start) / 1000000 )); \
	echo "Build completed in $$elapsed milliseconds."

library: $(OBJECTS)
	ar rcs $(LIBRARY) $(OBJECTS)

main.o: main.cpp calculator.h
	$(CC) $(CFLAGS) -c $< -o $@

calculator.o: calculator.cpp calculator.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE) $(LIBRARY)
