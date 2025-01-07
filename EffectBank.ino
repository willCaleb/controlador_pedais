
class EffectBank{
  public: 
    int buttonPin;
    int ledPin;
    const char* bankName;

    EffectBank(int buttonPin, int ledPin, const char* bankName)
        : buttonPin(buttonPin), ledPin(ledPin), bankName(bankName) {}

    void changeState(bool state) {

      digitalWrite(ledPin, state);

    }
};