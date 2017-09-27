//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TUCallContainer.h"

@class NSArray, TUCall;

@protocol TUCallContainerPrivate <TUCallContainer>
@property(readonly, nonatomic) _Bool existingCallsHaveMultipleProviders;
@property(readonly, retain, nonatomic) TUCall *frontmostAudioOrVideoCall;
@property(readonly, nonatomic) TUCall *frontmostCall;
@property(readonly, nonatomic) TUCall *conferenceCall;
@property(readonly, nonatomic) TUCall *displayedCall;
@property(readonly, copy, nonatomic) NSArray *_allCalls;
- (TUCall *)callPassingTest:(_Bool (^)(TUCall *))arg1 sortedUsingComparator:(long long (^)(id, id))arg2;
@end

