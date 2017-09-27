//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate;

@interface CAMNebulaSecondaryState : NSObject <NSCoding>
{
    NSDate *_stopTime;
    long long _stopReasons;
    NSDate *_lastMovieWriteAttemptTime;
    long long _movieWriteAttemptsCount;
    long long _failedStateReadAttemptsCount;
}

+ (id)secondaryStateWithContentsOfFile:(id)arg1;
@property(nonatomic) long long failedStateReadAttemptsCount; // @synthesize failedStateReadAttemptsCount=_failedStateReadAttemptsCount;
@property(readonly, nonatomic) long long movieWriteAttemptsCount; // @synthesize movieWriteAttemptsCount=_movieWriteAttemptsCount;
@property(readonly, nonatomic) NSDate *lastMovieWriteAttemptTime; // @synthesize lastMovieWriteAttemptTime=_lastMovieWriteAttemptTime;
@property(nonatomic) long long stopReasons; // @synthesize stopReasons=_stopReasons;
@property(retain, nonatomic) NSDate *stopTime; // @synthesize stopTime=_stopTime;
- (void).cxx_destruct;
- (_Bool)writeToFile:(id)arg1;
- (void)notifyWillAttemptToWriteMovie;
- (_Bool)addStopReasons:(long long)arg1 stopTime:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

