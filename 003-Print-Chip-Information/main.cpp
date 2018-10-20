#include <Arduino.h> 

void setup() { 
  // put your setup code here, to run once: 
  Serial.begin(74880); 
} 

void loop() { 
  // put your main code here, to run repeatedly: 
  Serial.printf("\n[HARDWARE INFO]\n"); 
  Serial.printf("Chip ID = %X\n", ESP.getChipId()); 
  Serial.printf("CPU Freq = %d MHz\n", ESP.getCpuFreqMHz()); 
  Serial.printf("Free Memory = %d Kbytes\n", ESP.getFreeHeap()/1024); 
  Serial.printf("FlashChipSize = %d Mbytes\n", ESP.getFlashChipSize()/1024/1024); 
  Serial.printf("FlashChipRealSize = %d Mbytes\n", ESP.getFlashChipRealSize()/1024/1024); 

  delay(1000); 
}
