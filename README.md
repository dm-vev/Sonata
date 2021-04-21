# Sonata
Hello! Sonata is API for make cross-platform apps. Now it project is raw and in development. 

Features:
- Add Arduino support
- Add cross-platform GUI lib

App example:
  #include <iostream>
  #include <unistd.h>
  #include "SonataAPI.cpp"

  class ExampleApp{
    public:
        bool Run(){
            SonataAPI API;
            API.print("Sonata API version: ");
            API.print(API.API);
            API.delay(1000);
            API.raiseError("test error");
            API.raiseWarn("test warn");
            return true;
        }
        string AppName = "ExampleApp";
        int MinAPI = 0.1;
  };

  int main(){
    ExampleApp App;
    SonataAPI Sonata;
    if (App.MinAPI <= Sonata.API_Version){App.Run();}
    else {Sonata.println("App minimal API > now SonataAPI");}
    return 0;

  }

