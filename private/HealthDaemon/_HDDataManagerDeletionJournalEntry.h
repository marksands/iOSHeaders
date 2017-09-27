//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class HDDataDeletionConfiguration, NSArray;

@interface _HDDataManagerDeletionJournalEntry : HDJournalEntry
{
    NSArray *_objectUUIDs;
    HDDataDeletionConfiguration *_configuration;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) HDDataDeletionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) NSArray *objectUUIDs; // @synthesize objectUUIDs=_objectUUIDs;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 objectUUIDs:(id)arg2;

@end

