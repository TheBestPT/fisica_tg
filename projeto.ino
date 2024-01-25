#include <Arduino_HTS221.h>

/**
  * Sketch done by Francisco Fernandes (22896) - Temperature reading
*/
void setup() {
  Serial.begin(115200);
  while(!Serial);
  //Verificar se o sensor já está a funcionar
  if (!HTS.begin()) {
    Serial.println("Failed to initialize humidity temperature sensor!\n");
    while (1);
  }
  Serial.print("t,valor_sensor\n");
}

void loop() {  
  //Mostrar segundos
  Serial.print(millis()/1000);
  Serial.print(",");
  //Mostrar o valor do sensor
  Serial.print(HTS.readTemperature());
  Serial.print("\n");
  
  delay(1000);
}
