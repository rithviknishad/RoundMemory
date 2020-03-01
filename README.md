# ROUND MEMORY
Round Memory Averaging for Realtime Datasampling and processing 

### Usage

1. Initialize memory space by:
```cpp
    RoundMemory<float> sensorReadings = RoundMemory<float>(100, 0);
```

2. Append new sensor readings to memory space using:
```cpp
    sensorReadings.append( sensor.getReading() ); // replace argument with new reading to append.
```

3. Use avg() to get the average of the samples of last 'size' readings.
```cpp
    Serial.println( sensorReadings.avg() ); // returns average of readings.
```

4. RoundMemory.append() function returns the change in average before appending and after appending.
```cpp
    float delta = sensorReadings.append( sensor.getReading() );

    // is the same as:
    float u = sensorReadings.avg();
    sensorReadings.append( sensor.getReading() );
    float delta = u - sensorReadings.avg();
```
