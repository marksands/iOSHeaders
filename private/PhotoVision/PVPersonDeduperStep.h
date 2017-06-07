//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, NSString, PVPersonClusterManager, PVPersonDeduperProfile;
@protocol PVPersonPromoterDelegate;

__attribute__((visibility("hidden")))
@interface PVPersonDeduperStep : NSObject
{
    _Bool _shouldStop;
    float _progress;
    PVPersonClusterManager *_personClusterManager;
    NSDictionary *_invalidCandidatesMapping;
    NSMapTable *_mergeRelations;
    id <PVPersonPromoterDelegate> _delegate;
    PVPersonDeduperProfile *_profile;
}

@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
@property(readonly, nonatomic) PVPersonDeduperProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) __weak id <PVPersonPromoterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMapTable *mergeRelations; // @synthesize mergeRelations=_mergeRelations;
@property(readonly, nonatomic) NSDictionary *invalidCandidatesMapping; // @synthesize invalidCandidatesMapping=_invalidCandidatesMapping;
@property(readonly, nonatomic) PVPersonClusterManager *personClusterManager; // @synthesize personClusterManager=_personClusterManager;
- (void).cxx_destruct;
- (_Bool)addPotentialMergeCandidateForPerson:(id)arg1 withOtherPerson:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)mergeCandidatePersonsWithUpdateBlock:(CDUnknownBlockType)arg1;
- (id)_resolveMergeCandidate:(id)arg1 forPerson:(id)arg2;
- (_Bool)shouldStopWithUpdateBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *metricsKey;
- (_Bool)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3;
- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 resultBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSString *name;
- (id)initWithPersonClusterManager:(id)arg1 invalidCandidatesMapping:(id)arg2 profile:(id)arg3;

@end

