//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@protocol PGGraphMomentNode <NSObject>
@property(readonly, nonatomic) unsigned long long locationMobilityType;
@property(readonly) _Bool isInterestingForMemories;
@property(readonly) _Bool happensPartiallyAtMyHomeOrWork;
@property(readonly) _Bool happensPartiallyAtHome;
@property(readonly) unsigned long long numberOfAssetsWithPeople;
- (void)momentEnumerateMeaningNodesUsingBlock:(void (^)(PGGraphMeaningEdge *, PGGraphMeaningNode *, _Bool *))arg1;
- (void)momentEnumerateCollectionNodesUsingBlock:(void (^)(PGGraphEdge *, PGGraphCollectionNode *, _Bool *))arg1;
- (void)momentEnumeratePersonNodesUsingBlock:(void (^)(PGGraphPresentEdge *, PGGraphPersonNode *, _Bool *))arg1;
- (void)momentEnumerateRemoteAddressNodesUsingBlock:(void (^)(PGGraphEdge *, PGGraphAddressNode *, _Bool *))arg1;
- (void)momentEnumerateAddressNodesUsingBlock:(void (^)(PGGraphEdge *, PGGraphAddressNode *, _Bool *))arg1;
- (void)momentEnumerateCelebratedHolidayNodesUsingBlock:(void (^)(PGGraphEdge *, PGGraphHolidayNode *, _Bool *))arg1;
- (void)momentEnumerateDateNodesUsingBlock:(void (^)(PGGraphEdge *, PGGraphDateNode *, _Bool *))arg1;
- (_Bool)momentEndsBeforeLocalDate:(NSDate *)arg1;
- (_Bool)momentStartsAfterLocalDate:(NSDate *)arg1;
@end
