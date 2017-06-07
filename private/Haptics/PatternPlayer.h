//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Haptics/HPHapticPatternPlayer-Protocol.h>

@class AVHapticPlayerChannel, HPHapticEngine, NSArray;

__attribute__((visibility("hidden")))
@interface PatternPlayer : NSObject <HPHapticPatternPlayer>
{
    HPHapticEngine *_engine;
    AVHapticPlayerChannel *_channel;
    NSArray *_events;
    unsigned long long _runningToken;
}

- (void).cxx_destruct;
- (_Bool)sendParameters:(id)arg1 atTime:(double)arg2 error:(id *)arg3;
- (_Bool)stop:(double)arg1 error:(id *)arg2;
- (_Bool)start:(double)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithPattern:(id)arg1 engine:(id)arg2;
- (id)init;

@end

