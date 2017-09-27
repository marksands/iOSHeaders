//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOMotionContextProviderDelegate.h"

@class NSString;

@interface GEOMotionContext : NSObject <GEOMotionContextProviderDelegate>
{
    id <GEOMotionContextProvider> _provider;
    unsigned long long _motionType;
    unsigned long long _exitType;
    unsigned long long _confidence;
}

@property(readonly, nonatomic) unsigned long long confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) unsigned long long exitType; // @synthesize exitType=_exitType;
@property(readonly, nonatomic) unsigned long long motionType; // @synthesize motionType=_motionType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)motionContextProvider:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
@property(readonly, nonatomic) _Bool isDriving;
@property(readonly, nonatomic) _Bool isRunning;
@property(readonly, nonatomic) _Bool isWalking;
@property(readonly, nonatomic) _Bool isMoving;
- (void)stopMotionUpdates;
- (void)startMotionUpdatesWithProvider:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

