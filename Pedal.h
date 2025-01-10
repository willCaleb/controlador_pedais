#ifndef PEDAL_H
#define PEDAL_H


class Pedal{

  int relayIn;
  int relayOut;

  char* name;

  public:
    Pedal() : relayIn(0), relayOut(0) {}

    Pedal(const int relayIn, const int relayOut, const char* name) : relayIn(relayIn), relayOut(relayOut), name(name){}

    char* getName() {
      return this->name;
    }

    int getRelayIn() {
      return this->relayIn;
    }

    int getRelayOut() {
      return this->relayOut;
    }
 
};

#endif