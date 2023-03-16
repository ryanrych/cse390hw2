enum class Direction { North, East, South, West };
enum class Step { North, East, South, West, Stay, Finish };

class WallsSensor {
public:
    virtual ~WallsSensor() {}
    virtual bool isWall(Direction d) const = 0;
};

class DirtSensor {
public:
    virtual ~DirtSensor() {}
    virtual int dirtLevel() const = 0;
};

class BatteryMeter {
public:
    virtual ~BatteryMeter() {}
    virtual std::size_t getBatteryState() const = 0;
};

class AbstractAlgorithm {
public:
    virtual ~AbstractAlgorithm() {}
    virtual void setMaxSteps(std::size_t maxSteps) = 0;
    virtual void setWallsSensor(const WallsSensor&) = 0;
    virtual void setDirtSensor(const DirtSensor&) = 0;
    virtual void setBatteryMeter(const BatteryMeter&) = 0;
    virtual Step nextStep() = 0;
};
