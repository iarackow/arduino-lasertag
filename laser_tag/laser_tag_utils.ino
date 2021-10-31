// PIN ASSIGNMENTS

int LASER = 3;
int TRIGGER = 5;
int LIGHT_SENSOR = A1;
int VEST_LIGHTS = 7;
int PIEZO = 4;

/*
 * Initialize system: set random, initialize arrow characters, set up LCD
 */
void initialize_system() {
  pinMode(LASER, OUTPUT);
  pinMode(VEST_LIGHTS, OUTPUT);
  pinMode(PIEZO, OUTPUT);
  pinMode(LIGHT_SENSOR, INPUT);
  pinMode(TRIGGER, INPUT);
}

/*
 * Display "CALIBRATING" as a scroll on the LCD
 * Display capacitive sensor readings from pins 7-10 in serial monitor
 */
void calibrate() {
}

/*
 * Display which sensor has been pressed on the gamepad, assuming labels[] and thresholds[]
 * have been set up correctly
 */
void test_calibration() {
}

/*
 * Read in gamepad inputs and update num_buttons_pressed and last_button_pressed
 * We only increase "num_buttons_pressed" if the current button pressed is greater than the previous button pressed
 */
void update_inputs() {
  trigger_pressed = digitalRead(TRIGGER);
  Serial.println(trigger_pressed);
  sensor_value = analogRead(LIGHT_SENSOR);
  Serial.println(sensor_value);
}

void set_vest_lights(int level) {
  if (level == ON) {
    Serial.println("Vest on");
    digitalWrite(VEST_LIGHTS, HIGH);
  } else {
    Serial.println("Vest off");
    digitalWrite(VEST_LIGHTS, LOW);
  }
}

void set_laser(int level) {
  if (level == ON) {
    Serial.println("Laser on");
    digitalWrite(LASER, HIGH);
  } else {
    Serial.println("Laser off");
    digitalWrite(LASER, LOW);
  }
}

void make_sound(game_sound sound) {
  // play desired sound
}

void report_hit() {
}
