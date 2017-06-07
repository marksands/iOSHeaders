//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BYFlowSkipController : NSObject
{
}

+ (id)flowSkipIdentifiersFromFollowUpAction:(id)arg1;
+ (id)_supportedIdentifiers;
+ (id)sharedInstance;
- (void)registerActivities;
- (void)observeFinishSetupTriggers;
- (void)revisePendingFollowUps;
- (void)passcodeDidChange;
- (void)cancelPendingFlows;
- (void)didCompleteFlow:(id)arg1;
- (void)didSkipFlow:(id)arg1;
- (_Bool)_isBasicFunctionalityEnabled;
- (void)setBasicFunctionalityEnabled:(_Bool)arg1;
- (id)init;

@end

