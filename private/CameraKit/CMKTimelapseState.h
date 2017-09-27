//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class CLLocation, NSDate, NSString;

@interface CMKTimelapseState : NSObject <NSCoding, NSCopying>
{
    _Bool _usingFrontCamera;
    _Bool _allFramesWritten;
    int _captureOrientation;
    float _focusLensPosition;
    NSString *_timelapseUUID;
    NSDate *_startTime;
    CLLocation *_startLocation;
    NSDate *_lastFrameResponseTime;
    NSDate *_stopTime;
    long long _stopReasons;
    double _captureTimeInterval;
    long long _frameIndexStride;
    long long _nextFrameIndex;
}

+ (id)stateWithContentsOfFile:(id)arg1;
+ (double)maxTimeToWaitForWrittenFrameAfterStop;
@property(nonatomic) float focusLensPosition; // @synthesize focusLensPosition=_focusLensPosition;
@property(readonly, nonatomic) long long nextFrameIndex; // @synthesize nextFrameIndex=_nextFrameIndex;
@property(readonly, nonatomic) long long frameIndexStride; // @synthesize frameIndexStride=_frameIndexStride;
@property(readonly, nonatomic) double captureTimeInterval; // @synthesize captureTimeInterval=_captureTimeInterval;
@property(nonatomic) _Bool allFramesWritten; // @synthesize allFramesWritten=_allFramesWritten;
@property(nonatomic) long long stopReasons; // @synthesize stopReasons=_stopReasons;
@property(retain, nonatomic) NSDate *stopTime; // @synthesize stopTime=_stopTime;
@property(retain, nonatomic) NSDate *lastFrameResponseTime; // @synthesize lastFrameResponseTime=_lastFrameResponseTime;
@property(retain, nonatomic) CLLocation *startLocation; // @synthesize startLocation=_startLocation;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int captureOrientation; // @synthesize captureOrientation=_captureOrientation;
@property(nonatomic, getter=isUsingFrontCamera) _Bool usingFrontCamera; // @synthesize usingFrontCamera=_usingFrontCamera;
@property(retain, nonatomic) NSString *timelapseUUID; // @synthesize timelapseUUID=_timelapseUUID;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long connectionMode;
- (_Bool)writeToFile:(id)arg1 createDirectoryIfNeeded:(_Bool)arg2;
- (void)forceCompleted;
- (_Bool)isReadyForWritingMovie;
- (_Bool)canContinueCapture;
- (_Bool)addStopReasons:(long long)arg1 stopTime:(id)arg2;
- (id)filePathForNextFrameIndex;
- (_Bool)incrementFrameIndex;
- (_Bool)isEqualToState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_commonCMKTimelapseStateInitWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (_Bool)mergeSecondaryState:(id)arg1;

@end

