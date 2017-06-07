//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRadioPlaybackHistory, ICRadioPlaybackHistoryStore, ICStoreRequestContext, MPModelRadioStation, MPSectionedCollection, NSMutableArray, NSString, _MPCModelRadioPlaybackQueueAVItemSection, _MPCModelRadioPlaybackQueueStationTracksSection;

@interface MPCModelRadioPlaybackQueue : NSObject
{
    NSString *_originalStationName;
    _MPCModelRadioPlaybackQueueAVItemSection *_placeholderItemSection;
    ICRadioPlaybackHistoryStore *_playbackHistoryStore;
    _MPCModelRadioPlaybackQueueAVItemSection *_prefixItemSection;
    MPModelRadioStation *_radioStation;
    NSMutableArray *_sections;
    _MPCModelRadioPlaybackQueueStationTracksSection *_stationTracksSection;
    ICStoreRequestContext *_storeRequestContext;
}

+ (_Bool)identifiersIdentifyRadioStation:(id)arg1;
@property(retain, nonatomic) MPModelRadioStation *radioStation; // @synthesize radioStation=_radioStation;
- (void).cxx_destruct;
- (id)_indexPathForGlobalIndex:(long long)arg1;
- (long long)_globalIndexForIndexPath:(id)arg1;
- (void)updateWithPersonalizedResponse:(id)arg1;
- (id)tracksByApplyingTracksResponse:(id)arg1 currentIndex:(long long)arg2;
@property(readonly, nonatomic) MPSectionedCollection *tracks;
- (id)trackForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) MPSectionedCollection *trackModels;
- (void)savePlaybackHistoryWithUpdates:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)savePlaybackHistoryWithUpdates:(CDUnknownBlockType)arg1;
- (long long)removeExplicitItems;
@property(readonly, copy, nonatomic) ICRadioPlaybackHistory *playbackHistory;
@property(readonly, nonatomic) long long numberOfItems;
- (_Bool)needsMoreTracksForPlaybackIndex:(long long)arg1;
- (_Bool)isPlaceholderAVItem:(id)arg1;
- (_Bool)isExplicitItemAtIndex:(long long)arg1;
- (long long)indexOfItemWithAVItemQueueIdentifier:(id)arg1;
- (id)AVItemQueueIdentifierAtIndex:(long long)arg1;
- (id)AVItemAtIndex:(long long)arg1;
- (id)initWithPlaybackContext:(id)arg1;

@end

