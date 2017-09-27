//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MANode.h"

#import "PVAssetProtocol.h"
#import "PVFaceProtocol.h"
#import "PVMomentProtocol.h"
#import "PVPersonProtocol.h"

@class NSData, NSDate, NSString;

@interface PVLibraryGraphNode : MANode <PVMomentProtocol, PVFaceProtocol, PVPersonProtocol, PVAssetProtocol>
{
}

+ (id)dateForTimeInterval:(double)arg1;
+ (double)timeIntervalForDate:(id)arg1;
@property(readonly) NSString *localIdentifier;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D approximateCoordinate;
@property(readonly, nonatomic) unsigned long long estimatedAssetCount;
- (_Bool)isDirty;
- (unsigned long long)faceCountInFaceGroup;
@property(nonatomic) long long qualityMeasure;
@property(readonly, nonatomic) NSData *faceprintData;
@property(readonly, nonatomic) long long clusterSequenceNumber;
@property(readonly, nonatomic) double centerY;
@property(readonly, nonatomic) double centerX;
@property(readonly, nonatomic) double size;
@property(readonly, nonatomic) NSString *personLocalIdentifier;
- (void)pv_addMergeCandidatePersons:(id)arg1;
@property(retain, nonatomic) id <PVFaceProtocol> keyFace;
- (unsigned long long)type;
@property(readonly, nonatomic) unsigned long long faceCount;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) _Bool favorite;
@property(nonatomic) long long manualOrder;
@property(nonatomic) _Bool isVerified;
@property(readonly, nonatomic) long long verifiedType;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) struct CLLocationCoordinate2D locationCoordinate;
@property(readonly, nonatomic) NSDate *clsDistanceIdentity;
@property(readonly, nonatomic) NSData *distanceIdentity;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSString *cloudIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

