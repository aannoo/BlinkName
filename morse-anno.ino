
const pin_t MY_LED = D7;

SYSTEM_THREAD(ENABLED);

void setup()
{
	pinMode(MY_LED, OUTPUT);
}

void loop()
{
    //Anno in morse code
    //.- -. -. ---
    onShort();
    onLong();
    off();
    onLong();
    onShort();
    off();
    onLong();
    onShort();
    off();
    onLong();
    onLong();
    onLong();
	
}

void onShort() {
    // Turn on the LED
	digitalWrite(MY_LED, HIGH);
	
	// Leave it on for one second
	delay(1s);
	
	// Turn it off
	digitalWrite(MY_LED, LOW);
	
	// Wait one more second
	delay(1s);
}

void onLong() {
    
    // Turn on the LED
	digitalWrite(MY_LED, HIGH);
	
	// Leave it on for two seconds
	delay(3s);
	
	// Turn it off
	digitalWrite(MY_LED, LOW);
	
	// Wait one more second
	delay(1s);
    
}

void off() {
    // Leave it off for another second
	delay(1s);
}