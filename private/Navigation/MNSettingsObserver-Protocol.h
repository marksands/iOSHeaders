//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNSettings, MNSettingsManager;

@protocol MNSettingsObserver <NSObject>
- (void)settingsManager:(MNSettingsManager *)arg1 didUpdateSettings:(MNSettings *)arg2 previousSettings:(MNSettings *)arg3;
@end

