const byte STATE_STARTUP = 0;
const byte STATE_IDLE = 1;

byte state;

void setup()
{
    // Setup serial comms so we can send debug info to the Arduino serial monitor
    Serial.begin(9600);

    state = STATE_STARTUP;
}

void loop()
{
    delay(2000);
}
