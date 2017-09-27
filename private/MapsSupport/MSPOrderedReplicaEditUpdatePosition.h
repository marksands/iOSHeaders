//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapsSupport/MSPReplicaEdit.h>

@class MSPPosition, MSPVectorTimestamp;

@interface MSPOrderedReplicaEditUpdatePosition : MSPReplicaEdit
{
    MSPPosition *_position;
    MSPVectorTimestamp *_positionTimestamp;
}

@property(readonly, nonatomic) MSPVectorTimestamp *positionTimestamp; // @synthesize positionTimestamp=_positionTimestamp;
@property(readonly, nonatomic) MSPPosition *position; // @synthesize position=_position;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initToMoveRecordWithIdentifier:(id)arg1 toPosition:(id)arg2 positionTimestamp:(id)arg3;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;

@end

