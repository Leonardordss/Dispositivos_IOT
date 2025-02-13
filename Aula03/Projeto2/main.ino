#define ON_BUTTON_PIN 9
#define BAR_SENSOR_PIN 1
#define WINDOW1_SENSOR_PIN 2
#define WINDOW2_SENSOR_PIN 3
#define ROOM_SENSOR_PIN 4
#define KITCHEN_SENSOR_PIN 5
#define GARAGE_SENSOR_PIN 6
#define HALL_SENSOR_PIN 7
#define ALARM_PIN 8

bool onButton = 0, bar_sensor = 0, window1_sensor = 0;
bool window2_sensor = 0, room_sensor = 0, kitchen_sensor = 0;
bool garage_sensor = 0, hall_sensor = 0, alarm = 0;

void setup()
{
    pinMode(ON_BUTTON_PIN,INPUT_PULLUP);
    pinMode(BAR_SENSOR_PIN, INPUT_PULLUP);
    pinMode(WINDOW1_SENSOR_PIN, INPUT_PULLUP);
    pinMode(WINDOW2_SENSOR_PIN, INPUT_PULLUP);
    pinMode(ROOM_SENSOR_PIN, INPUT_PULLUP);
    pinMode(KITCHEN_SENSOR_PIN, INPUT_PULLUP);
    pinMode(GARAGE_SENSOR_PIN, INPUT_PULLUP);
    pinMode(HALL_SENSOR_PIN, INPUT_PULLUP);
    pinMode(ALARM_PIN,OUTPUT);
}

void loop(){

    onButton = digitalRead(ON_BUTTON_PIN);
    bar_sensor = digitalRead(BAR_SENSOR_PIN);
    window1_sensor = digitalRead(WINDOW1_SENSOR_PIN);
    window2_sensor = digitalRead(WINDOW2_SENSOR_PIN);
    room_sensor = digitalRead(ROOM_SENSOR_PIN);
    kitchen_sensor = digitalRead(KITCHEN_SENSOR_PIN);
    garage_sensor = digitalRead(GARAGE_SENSOR_PIN);
    hall_sensor = digitalRead(HALL_SENSOR_PIN);
    digitalWrite(ALARM_PIN, alarm);

    if(onButton == 1){
        if(!bar_sensor || !window1_sensor || !window2_sensor || room_sensor || kitchen_sensor || garage_sensor || hall_sensor){
            alarm = 1;
        }
        else{
            alarm = 0;
        }

    }
    //Se o botão de ligar não estiver pressionado:
    else{
        alarm = 0;
    }
}