//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface HDSyncAnchorRangeMap : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_anchorRangesByObjectType;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *anchorRangesByObjectType; // @synthesize anchorRangesByObjectType=_anchorRangesByObjectType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)reset;
- (unsigned long long)anchorRangeCount;
- (void)enumerateAnchorRangesAndSyncEntitiesWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)getAnchorRange:(struct HDSyncAnchorRange *)arg1 forSyncEntityClass:(Class)arg2;
- (void)setAnchorRange:(struct HDSyncAnchorRange)arg1 forSyncEntityClass:(Class)arg2;
- (id)codableSyncAnchorRangeMap;
- (id)initWithCodableSyncAnchorRangeMap:(id)arg1 error:(id *)arg2;

@end

