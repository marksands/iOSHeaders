//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PTVolumeChangeNotifier : NSObject
{
    NSMutableSet *ringerVolumeChangedHandlers;
    NSMutableSet *ringerSilentChangedHandlers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)ringerSilentChanged;
- (void)ringerVolumeChanged:(id)arg1;
- (void)addVolumeChangedHandler:(CDUnknownBlockType)arg1;
- (void)addRingerSwitchChangedHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
