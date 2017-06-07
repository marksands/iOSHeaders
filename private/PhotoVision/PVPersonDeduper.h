//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PVPersonClusterManager, PVPersonDeduperProfile, PVPersonPromoter;
@protocol PVPersonPromoterDelegate;

@interface PVPersonDeduper : NSObject
{
    PVPersonClusterManager *_personClusterManager;
    NSDictionary *_invalidCandidatesMapping;
    PVPersonDeduperProfile *_profile;
    id <PVPersonPromoterDelegate> _delegate;
    PVPersonPromoter *_personPromoter;
}

@property(nonatomic) __weak PVPersonPromoter *personPromoter; // @synthesize personPromoter=_personPromoter;
@property(nonatomic) __weak id <PVPersonPromoterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)dedupeNewVerifiedPersons:(id)arg1 withExistingVerifiedPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)dedupeUnverifiedPersons:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (id)dedupeUnverifiedPersons:(id)arg1 withVerifiedPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)basicSequence;
- (void)_executeStepsInSequences:(id)arg1 forPersons:(id)arg2 andOtherPersons:(id)arg3 updateBlock:(CDUnknownBlockType)arg4 resultBlock:(CDUnknownBlockType)arg5;
- (id)initWithPersonClusterManager:(id)arg1 andInvalidCandidatesMapping:(id)arg2 profile:(id)arg3;

@end

