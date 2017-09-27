//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKObjectID;

@interface EKObjectChange : NSObject
{
    int _changeType;
    EKObjectID *_changedObjectID;
    long long _changeID;
    long long _sequenceNumber;
}

+ (id)objectChangeWithProperties:(id)arg1;
+ (void)callClientResultsHandler:(CDUnknownBlockType)arg1 changesTruncated:(_Bool)arg2 latestToken:(long long)arg3 changes:(id)arg4;
+ (void)fetchChangesToObjectsOfEntityType:(int)arg1 inCalendar:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (void)fetchChangesToObjectsOfEntityType:(int)arg1 inSource:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (void)fetchChangesToObjectsOfEntityType:(int)arg1 inStore:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (CDUnknownBlockType)processFetchResults:(CDUnknownBlockType)arg1;
+ (void)fetchObjectChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchObjectChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchObjectChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) long long changeID; // @synthesize changeID=_changeID;
@property(readonly, nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) EKObjectID *changedObjectID; // @synthesize changedObjectID=_changedObjectID;
- (void).cxx_destruct;
- (id)serializedPropertiesForConsumingChange;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithChangeProperties:(id)arg1;

@end

