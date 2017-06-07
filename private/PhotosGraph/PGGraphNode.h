//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MANode.h"

#import <PhotosGraph/PGGraphAddressNode-Protocol.h>
#import <PhotosGraph/PGGraphAreaNode-Protocol.h>
#import <PhotosGraph/PGGraphCollectionNode-Protocol.h>
#import <PhotosGraph/PGGraphDateNode-Protocol.h>
#import <PhotosGraph/PGGraphHolidayNode-Protocol.h>
#import <PhotosGraph/PGGraphMeaningNode-Protocol.h>
#import <PhotosGraph/PGGraphMobilityNode-Protocol.h>
#import <PhotosGraph/PGGraphMomentNode-Protocol.h>
#import <PhotosGraph/PGGraphPersonNode-Protocol.h>
#import <PhotosGraph/PGGraphSocialGroupNode-Protocol.h>

@class NSDateComponents, NSString;

@interface PGGraphNode : MANode <PGGraphMobilityNode, PGGraphPersonNode, PGGraphMeaningNode, PGGraphSocialGroupNode, PGGraphDateNode, PGGraphAddressNode, PGGraphCollectionNode, PGGraphHolidayNode, PGGraphMomentNode, PGGraphAreaNode>
{
}

+ (id)sortEventsByDateSortDescriptors;
+ (id)addressNodesFromEventNodes:(id)arg1;
+ (id)_specialDateComponentsForDate:(id)arg1;
+ (double)specialDateTimeIntervalForDateComponents:(id)arg1;
+ (id)_specialDateDateComponentsFromTimeInterval:(double)arg1;
+ (double)specialDateTimeIntervalForDate:(id)arg1;
+ (unsigned long long)partOfDayForPartOfDayNode:(id)arg1;
+ (id)stringValueForPartOfDay:(unsigned long long)arg1;
- (id)keywordDescription;
- (id)_stringValueForPropertyWithKey:(id)arg1;
- (id)UUID;
- (id)name;
@property(readonly, nonatomic) unsigned long long mobilityType;
- (_Bool)isFrequentSocialGroup;
- (id)nameAsSocialGroupNode;
- (void)_enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 shouldStop:(_Bool *)arg4 block:(CDUnknownBlockType)arg5;
- (void)enumerateDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3 andBlock:(CDUnknownBlockType)arg4;
- (id)deepNeighborsWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3;
- (unsigned long long)countOfDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3;
- (id)firstDeepNeighborWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3;
- (void)personEnumerateSocialGroupNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)personEnumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)belongsToBestSocialGroup;
@property(readonly) _Bool personIsUserCreated;
- (struct CLLocationCoordinate2D)coordinate;
- (id)matchingDescription;
- (id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2;
- (double)neighborScore;
- (double)contentScore;
- (_Bool)isSmartInteresting;
- (_Bool)isInteresting;
- (void)_enumeratePartOfDayWithThreshold:(float)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_partOfDayWithThreshold:(float)arg1;
- (void)enumerateSignificantPartOfDayUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePartOfDayUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)significantPartOfDay;
- (unsigned long long)partOfDay;
- (id)universalEndDate;
- (id)universalStartDate;
- (id)localEndDate;
- (id)localStartDate;
- (struct CLLocationCoordinate2D)bestLocationCoordinate;
- (id)bestAddressNode;
- (id)sameMonthEvents;
- (id)sameWeekendEvents;
- (id)lastWeekendEvents;
- (id)weekendNode;
- (_Bool)isWeekend;
- (id)nextEvent;
- (double)momentMeaningScore;
- (id)previousEvent;
- (unsigned long long)totalNumberOfPersons;
- (unsigned long long)numberOfAssets;
- (double)timestampTZEnd;
- (double)timestampTZStart;
- (double)timestampUTCEnd;
- (double)timestampUTCStart;
- (id)localIdentifier;
- (void)socialGroupEnumeratePersonNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)socialGroupEnumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long rank;
- (void)dateEnumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)dateEnumerateHolidayNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)meaningLabels;
- (double)contentScoreAverage;
- (double)meaningScore;
- (_Bool)belongsToDefaultMemoryAssetCollections;
- (_Bool)hasParentCollection;
- (_Bool)locationIsImproved;
- (void)addressEnumerateAreaNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)areaNodes;
- (id)collectionMeaningLabels;
- (void)collectionEnumerateMeaningNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)collectionMeaningNodes;
- (id)collectionSortedMomentNodes;
- (id)collectionMomentNodes;
- (void)collectionEnumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)collectionEndsBeforeLocalDate:(id)arg1;
- (_Bool)collectionStartsAfterLocalDate:(id)arg1;
- (void)momentEnumeratePersonNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateRemoteAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateCelebratedHolidayNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateDateNodesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)momentEndsBeforeLocalDate:(id)arg1;
- (_Bool)momentStartsAfterLocalDate:(id)arg1;
@property(readonly, nonatomic) unsigned long long locationMobilityType;
@property(readonly) _Bool isInterestingForMemories;
@property(readonly) _Bool happensPartiallyAtMyHomeOrWork;
@property(readonly) _Bool happensPartiallyAtHome;
@property(readonly) unsigned long long numberOfAssetsWithPeople;
- (id)lastWeekDateNodes;
- (id)sameWeekDateNodes;
- (id)localDate;
- (double)graphScore;
@property(retain, nonatomic) NSDateComponents *anniversaryDateComponents;
@property(retain, nonatomic) NSDateComponents *birthdayDateComponents;
- (double)personScore;
- (_Bool)isUserCreated;
- (_Bool)isFavorite;
- (long long)timeValue;
- (_Bool)diameterIsLargerThanDiameter:(double)arg1;
@property(readonly) _Bool isBlacklisted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

