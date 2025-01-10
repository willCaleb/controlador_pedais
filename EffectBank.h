#ifndef EFFECTBANK_H
#define EFFECTBANK_H

#include "Effect.h"

#define MAX_EFFECTS 5 

class EffectBank {
public:

    const char* bankName;
    Effect* effects[MAX_EFFECTS];

    EffectBank(const char* bankName, Effect* effects[])
        : bankName(bankName) {
        for (int i = 0; i < MAX_EFFECTS; i++) {
            this->effects[i] = effects[i];
        }
    }

    char* getBankName() {
      return this->bankName;
    }
};

#endif
