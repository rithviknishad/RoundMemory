# ROUND MEMORY
Round Memory Averaging for Realtime Datasampling and processing.
Conservative branch is much faster in performance and requires very less space (not proportional to size like master branch).

### Usage

1. Initialize object by passing:
```cpp
    RoundMemory sensorReadings = RoundMemory(100, 0); // intializes object with size 100, w/ initial average = 0;
```

2. Append new sensor readings to memory space using:
```cpp
    sensorReadings.append( sensor.getReading() ); // replace argument with new reading to append.
```

3. Use avg() or access average member variable to get the average of the last 'size' readings.
```cpp
    Serial.println( sensorReadings.avg() ); // returns average of readings.
    Serial.println( sensorReadings.average ); // same as above line.
```

4. RoundMemory.append() function returns the change in average before appending and after appending.
```cpp
    float delta = sensorReadings.append( sensor.getReading() );

    // is the same as:
    float u = sensorReadings.avgerage;
    sensorReadings.append( sensor.getReading() );
    float delta = u - sensorReadings.avgerage;
```
