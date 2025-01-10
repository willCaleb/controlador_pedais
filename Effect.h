#include "Pedal.h"

#ifndef EFFECT_H
#define EFFECT_H

class Effect {

  private:
    char* name;
    Pedal** pedalList;
    int pedalCount;

  public:
  
     Effect(const char* name, const Pedal* const* pedals, int count) 
        : name(name), pedalCount(count) 
    {
        pedalList = new const Pedal*[count];
        for (int i = 0; i < pedalCount; i++) {
            pedalList[i] = pedals[i];
        }
    }

    char* getName(){
      return this->name;
    }

    Pedal** getPedals() {
      return this->pedalList;
    }

    int getPedalCount() {
      return this->pedalCount;
    }
};

#endif
