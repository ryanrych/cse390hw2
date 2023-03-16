#include <iostream>

#include "MySimulator.cpp"
#include "MyAlgorithm.cpp"

using namespace std;

int main(int argc, char** argv) {
    MySimulator simulator;

    simulator.readHouseFile(argv[1]);
//    MyAlgorithm algo;
//    simulator.setAlgorithm(algo);
//    simulator.run();

    return 0;
}
