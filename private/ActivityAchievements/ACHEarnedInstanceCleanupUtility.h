//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACHEarnedInstanceStore;

@interface ACHEarnedInstanceCleanupUtility : NSObject
{
    ACHEarnedInstanceStore *_earnedInstanceStore;
}

@property(retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // @synthesize earnedInstanceStore=_earnedInstanceStore;
- (void).cxx_destruct;
- (id)_cleanupBestWorkoutAchievements;
- (id)_cleanupFirstWorkoutAchievements;
- (void)performCleanup;
- (id)initWithEarnedInstanceStore:(id)arg1;

@end

