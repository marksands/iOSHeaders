//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SDLockHandler : NSObject
{
}

+ (void)_deviceLockSetup;
+ (_Bool)unlockedSinceBoot;
+ (_Bool)deviceFirstUnlockedInSB;
+ (_Bool)deviceFirstUnlockedInMKB;
+ (_Bool)deviceUnlocked;
+ (void)setupHandlerWithIndexQueue:(id)arg1 pipelineOnly:(_Bool)arg2 indexEnabled:(_Bool)arg3 delegate:(id)arg4;

@end
