
class Button{

private:
  int port;
  int position;
  int ledPort;

public:
  Button(const int port, const int position, const int ledPort) : port(port), position(position), ledPort(ledPort){}

  int getPort(){
    return this->port;
  }

  int getPosition(){
    return this->position;
  }

  int getLedPort(){
    return this->ledPort;
  }

  void onPress() {
    digitalWrite(ledPort, true);
  }
};
