#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

class SonataAPI{

    public:
        float API_Version = 0.1;
        string API = "0.1";
        string name = "Porckchop";
        void print(string txt) { cout << txt;}
        void println(string txt) { cout << txt << endl;}

        void raiseError(string err){

            SonataAPI api;
            api.print("[ Error ] :: ");
            api.println(err);

        }
        void raiseWarn(string err){

            SonataAPI api;
            api.print("[ Warn ] :: ");
            api.println(err);

        }

        void delay(int ms){sleep(ms);}

        int getDevice(){ return 2; } // Device types: 0 - Arduino 328P 1 - Arduino 16/32 bit 2 - PC x86 3 - PC - 64 4 PC Arm
        int getMaxRam(){

            SonataAPI api;
            if (api.getDevice() == 0){
                return 2048;
            }
            else if (api.getDevice() == 1){

                return 16384;

            }
            else {return -1;}

        }

        int random(int a, int b) {
            if(a > RAND_MAX){return 0;}
            else { return 1 + rand() % 3; }
        }

};
