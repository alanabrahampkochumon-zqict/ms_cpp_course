g++ -c ./advanced_math.cpp ./basic_math.cpp ./geometry.cpp ./main.cpp ./statistics.cpp 
g++ ./main.o ./advanced_math.o ./basic_math.o ./geometry.o ./statistics.o -O2 -o main_program
./main_program