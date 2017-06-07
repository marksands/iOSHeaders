//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProgress.h>

@class NSString;

@interface NSProgress (LSInstallProgressAdditions)
+ (id)keyPathsForValuesAffectingInstallPhase;
+ (id)keyPathsForValuesAffectingInstallState;
+ (id)publishingKeyForApp:(id)arg1 withPhase:(unsigned long long)arg2;
+ (id)childProgressForBundleID:(id)arg1 andPhase:(unsigned long long)arg2;
- (id)_LSDescription;
- (void)_LSResume;
@property(readonly, nonatomic) NSString *installPhaseString;
@property(nonatomic) unsigned long long installPhase;
@property(nonatomic) unsigned long long installState;
- (id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned long long)arg3;
@end
