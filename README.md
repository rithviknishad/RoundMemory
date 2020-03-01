# ROUND MEMORY
Round Memory Averaging for Realtime Datasampling and processing 

### Usage

1. Initialize memory space by:
```
    RoundMemory<float> sensorReadings = RoundMemory<float>(100, 0);
```

2. Append new sensor readings to memory space using:
```
    sensorReadings.append( sensor.getReading() ); // replace argument with new reading to append.
```

3. Use avg() to get the average of the samples of last 'size' readings.
```
    Serial.println( sensorReadings.avg() ); // returns average of readings.
```

4. RoundMemory.append() function returns the change in average before appending and after appending.
```
    float delta = sensorReadings.append( sensor.getReading() );

    // is the same as:
    float u = sensorReadings.avg();
    sensorReadings.append( sensor.getReading() );
    float delta = u - sensorReadings.avg();
```
