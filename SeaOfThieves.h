#ifndef SEAOFTHIEVES_H
#define SEAOFTHIEVES_H

class SeaOfThieves
{

 // variables
    private:
        int N; // N determines how big the 'map' will be
        int** M; // M will represent the actual map after taking input for N
        // ** will point towards a certain address
        int x; // determines X coordinates
        int y; // determines Y coordinates

 // methods
    public: 
        SeaOfThieves(int n); // constructor
        ~SeaOfThieves(); //destructor
        void UP();
        void DOWN();
        void LEFT();
        void RIGHT(); // these functions control where the pirate goes
        void take_coin();
        void hide_coin(); // these control where the pirate hides or takes the coins
        void finish_program(); // end the program
        
};
#endif