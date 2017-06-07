//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSInvestigationFeeder.h>

#import <MediaMiningKit/CLSInvestigationInterviewDelegate-Protocol.h>

@class CLSInvestigationSnapshotAssetCollectionBundle, NSArray, NSDictionary, NSString;

@interface CLSInvestigationSnapshotAssetFeeder : CLSInvestigationFeeder <CLSInvestigationInterviewDelegate>
{
    CLSInvestigationSnapshotAssetCollectionBundle *_bundle;
    NSDictionary *_metadataDictionary;
    NSArray *_pseudoAssets;
}

+ (id)feederForSnapshotBundle:(id)arg1;
- (void).cxx_destruct;
- (id)itemMetadataAtIndex:(unsigned long long)arg1 withKeys:(id)arg2;
- (struct CGImage *)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)allItems;
- (id)endDateComponents;
- (id)startDateComponents;
- (id)approximateLocation;
- (id)endDate;
- (id)startDate;
- (unsigned long long)numberOfItems;
- (id)initWithSnapshotBundle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

