//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVolumeProviding.h"
#import "SXVolumeReporting.h"

@class NSHashTable, NSString;

@interface SXVolumeProvider : NSObject <SXVolumeProviding, SXVolumeReporting>
{
    _Bool _muted;
    float _volume;
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) _Bool muted;
@property(readonly, nonatomic) float volume;
- (void).cxx_destruct;
- (void)setMuted:(_Bool)arg1;
- (void)setVolume:(float)arg1;
- (void)removeVolumeObserver:(id)arg1;
- (void)addVolumeObserver:(id)arg1;
- (id)initWithMuteState:(_Bool)arg1 volume:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
