//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSThread.h"

@class NSMutableArray, NSMutableDictionary, _UIStatusBarTimeStringServerCache;

__attribute__((visibility("hidden")))
@interface UIStatusBarServerThread : NSThread
{
    NSMutableArray *_clientPorts;
    NSMutableArray *_publishers;
    CDStruct_8a690d05 _statusBarData;
    CDStruct_8a690d05 _composedStatusBarData;
    CDStruct_4529d5a7 _overrides;
    struct __CFDictionary *_doubleHeightStatusStrings;
    struct __CFDictionary *_glowAnimationStates;
    NSMutableDictionary *_glowAnimationEndTimes;
    _Bool _composedStatusBarDataValid;
    _UIStatusBarTimeStringServerCache *_ioSurfaceCache;
}

@property(readonly, nonatomic) _UIStatusBarTimeStringServerCache *ioSurfaceCache; // @synthesize ioSurfaceCache=_ioSurfaceCache;
- (void).cxx_destruct;
- (void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2;
- (_Bool)_permanentizeStatusBarOverrideData;
- (void)_postStatusBarOverrideData:(CDStruct_4529d5a7 *)arg1;
- (void)_postDoubleHeightStatus:(char *)arg1 forStyle:(long long)arg2;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (void)_postGlowAnimationState:(_Bool)arg1 forStyle:(long long)arg2;
- (_Bool)_glowAnimationStateForStyle:(long long)arg1;
- (double)_glowAnimationEndTimeForStyle:(long long)arg1;
- (void)_removeAnimationEndTimesForOverrides:(int)arg1;
- (void)_removeStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_setAnimationEndTimesForOverrides:(int)arg1;
- (void)_addStyleOverrides:(int)arg1 forPublisher:(id)arg2;
- (void)_broadcastStyleOverrides;
- (int)_styleOverrides;
- (void)_postStatusBarData:(CDStruct_8a690d05 *)arg1 actions:(int)arg2 animated:(_Bool)arg3;
- (void)_broadcastStatusBarDataWithActions:(int)arg1 animated:(_Bool)arg2;
- (CDStruct_4529d5a7 *)_statusBarOverrideData;
- (CDStruct_8a690d05 *)_statusBarData;
- (void)_removePublisher:(struct __CFMachPort *)arg1;
- (id)_publisherForPort:(unsigned int)arg1;
- (void)_removeClient:(struct __CFMachPort *)arg1;
- (void)_addClient:(unsigned int)arg1;
- (void)main;

@end

