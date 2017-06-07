//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSInvestigationInterviewDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString;

@interface CLSInvestigationFeeder : NSObject <CLSInvestigationInterviewDelegate>
{
    unsigned long long _locationClusteringAlgorithm;
    _Bool _allowsInterview;
    NSMutableSet *_focusItems;
    NSSet *_focusPeopleUUIDs;
}

@property(retain, nonatomic) NSSet *focusPeopleUUIDs; // @synthesize focusPeopleUUIDs=_focusPeopleUUIDs;
@property(readonly, nonatomic) NSMutableSet *focusItems; // @synthesize focusItems=_focusItems;
@property(nonatomic) _Bool allowsInterview; // @synthesize allowsInterview=_allowsInterview;
@property(nonatomic) unsigned long long locationClusteringAlgorithm; // @synthesize locationClusteringAlgorithm=_locationClusteringAlgorithm;
- (void).cxx_destruct;
- (id)itemMetadataInInvestigation:(id)arg1 withKeys:(id)arg2 atIndex:(unsigned long long)arg3;
- (struct CGImage *)itemThumbnailInInvestigation:(id)arg1 atIndex:(unsigned long long)arg2 withResolution:(unsigned long long)arg3;
- (unsigned long long)numberOfItemsInInvestigation:(id)arg1;
- (id)prepareOperationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_prepareFeederWithOperation:(id)arg1;
- (void)enumeratePeopleNamesWithGaussians:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)enumerateLocationClustersWithGaussians:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (id)itemMetadataAtIndex:(unsigned long long)arg1 withKeys:(id)arg2;
- (struct CGImage *)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)allItems;
- (id)approximateLocation;
- (id)endDateComponents;
- (id)startDateComponents;
- (unsigned long long)numberOfItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

