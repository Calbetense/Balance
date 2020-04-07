#include "DEBUG.h"

// Plotter
double x;
Plotter p;

// Start plotter
void startPlotter(void){
    p.Begin();

    // Add time graphs
    p.AddTimeGraph( "Titulo Graf. temporal", 500, "Nombre de la variable", x );
}


// Maybe you want to make it portable, but it's ok nowadays
void printPlotter(void){
    //Plot
    x = PIND & (1 << 5);
    p.Plot();
}