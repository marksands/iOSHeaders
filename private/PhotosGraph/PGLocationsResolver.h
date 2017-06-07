//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSSet, PGIncompleteLocationResolver;

@interface PGLocationsResolver : NSObject
{
    _Bool _shouldCreateLocationToAddressMapTable;
    float _maximumMissingLocationsThreshold;
    PGIncompleteLocationResolver *_incompleteLocationResolver;
    NSArray *_sortedMoments;
    NSSet *_ignoredLocationNodes;
    NSSet *_ignoredAddressNodes;
    NSArray *_resolvedMomentNodes;
    NSArray *_resolvedLocationNodes;
    NSMapTable *_resolvedLocationNodesToAddressNodesMapTable;
}

@property(nonatomic) _Bool shouldCreateLocationToAddressMapTable; // @synthesize shouldCreateLocationToAddressMapTable=_shouldCreateLocationToAddressMapTable;
@property(retain, nonatomic) NSArray *resolvedLocationNodes; // @synthesize resolvedLocationNodes=_resolvedLocationNodes;
@property(retain, nonatomic) NSArray *resolvedMomentNodes; // @synthesize resolvedMomentNodes=_resolvedMomentNodes;
@property(retain, nonatomic) NSSet *ignoredAddressNodes; // @synthesize ignoredAddressNodes=_ignoredAddressNodes;
@property(retain, nonatomic) NSSet *ignoredLocationNodes; // @synthesize ignoredLocationNodes=_ignoredLocationNodes;
@property(retain, nonatomic) NSArray *sortedMoments; // @synthesize sortedMoments=_sortedMoments;
@property(retain, nonatomic) PGIncompleteLocationResolver *incompleteLocationResolver; // @synthesize incompleteLocationResolver=_incompleteLocationResolver;
@property(nonatomic) float maximumMissingLocationsThreshold; // @synthesize maximumMissingLocationsThreshold=_maximumMissingLocationsThreshold;
- (void).cxx_destruct;
- (void)_resolve;
- (void)setCreateLocationToAddressMapTable:(_Bool)arg1;
@property(readonly, nonatomic) NSMapTable *resolvedLocationNodesToAddressNodesMapTable; // @synthesize resolvedLocationNodesToAddressNodesMapTable=_resolvedLocationNodesToAddressNodesMapTable;
- (id)initWithSortedMoments:(id)arg1 incompleteLocationResolver:(id)arg2;
- (id)initWithMoments:(id)arg1 incompleteLocationResolver:(id)arg2;

@end

