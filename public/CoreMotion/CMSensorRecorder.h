//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CMSensorRecorder : NSObject
{
}

+ (_Bool)isAuthorizedForRecording;
+ (long long)authorizationStatus;
+ (_Bool)isGyroRecordingAvailable;
+ (_Bool)isAccelerometerRecordingAvailable;
+ (_Bool)isRecordingAvailableForType:(int)arg1;
- (_Bool)setGyroSampleRate:(unsigned int)arg1;
- (_Bool)setAccelSampleRate:(unsigned int)arg1;
- (_Bool)setSensorSampleRate:(unsigned int)arg1 forType:(int)arg2;
- (id)accelerometerDataSince:(unsigned long long)arg1;
- (void)recordAccelerometerFor:(double)arg1;
- (id)accelerometerDataFrom:(id)arg1 to:(id)arg2;
- (void)recordDataType:(int)arg1 forDuration:(double)arg2;
- (void)recordGyroForDuration:(double)arg1;
- (void)recordAccelerometerForDuration:(double)arg1;
- (_Bool)sendSensorDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 forType:(int)arg4;
- (_Bool)sendGyroDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (_Bool)sendAccelDataToUrl:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (id)sensorDataFromDate:(id)arg1 toDate:(id)arg2 forType:(int)arg3;
- (_Bool)validateTimesFromDate:(id *)arg1 toDate:(id)arg2;
- (id)gyroDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)accelerometerDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)gyroDataSinceId:(unsigned long long)arg1;
- (id)accelerometerDataSinceId:(unsigned long long)arg1;

@end

