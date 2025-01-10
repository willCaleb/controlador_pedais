
void reset(int** pedalsPorts, int count) {
  for (int i = 0; i < count; i++) {
    digitalWrite(pedalsPorts[i][0], false);
    digitalWrite(pedalsPorts[i][1], false);
  }
}

void turnOn(Effect effect) {
  for (int i = 0; i < effect.getPedalCount(); i++){
    digitalWrite(effect.getPedals()[i]->getRelayIn(), true);
    digitalWrite(effect.getPedals()[i]->getRelayOut(), true);
  }
}