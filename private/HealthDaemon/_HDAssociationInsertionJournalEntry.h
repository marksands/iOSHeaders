//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class NSData, NSUUID;

@interface _HDAssociationInsertionJournalEntry : HDJournalEntry
{
    _Bool _enforceSameSource;
    NSUUID *_parentUUID;
    NSData *_childUUIDsData;
    long long _provenance;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
@property(readonly, nonatomic) _Bool enforceSameSource; // @synthesize enforceSameSource=_enforceSameSource;
@property(readonly, nonatomic) long long provenance; // @synthesize provenance=_provenance;
@property(readonly, nonatomic) NSData *childUUIDsData; // @synthesize childUUIDsData=_childUUIDsData;
@property(readonly, nonatomic) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 enforceSameSource:(_Bool)arg4;

@end

