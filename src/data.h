
struct MainboardData{
    float batteryVoltage;

    bool obstacleLeft;
    bool obstacleRight;
    bool obstacleFront;
};

struct RemoteData{
    int throttle;
    int steering;
    bool modeButton;
}