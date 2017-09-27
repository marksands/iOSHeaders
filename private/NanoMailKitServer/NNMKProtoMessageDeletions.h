//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessageDeletions : PBCodable <NSCopying>
{
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    unsigned int _mailboxSyncVersion;
    NSMutableArray *_messageDeletions;
    CDStruct_8d07e858 _has;
}

+ (Class)messageDeletionType;
@property(nonatomic) unsigned int mailboxSyncVersion; // @synthesize mailboxSyncVersion=_mailboxSyncVersion;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(retain, nonatomic) NSMutableArray *messageDeletions; // @synthesize messageDeletions=_messageDeletions;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMailboxSyncVersion;
@property(readonly, nonatomic) _Bool hasMailboxId;
- (id)messageDeletionAtIndex:(unsigned long long)arg1;
- (unsigned long long)messageDeletionsCount;
- (void)addMessageDeletion:(id)arg1;
- (void)clearMessageDeletions;
@property(readonly, nonatomic) _Bool hasDateSynced;
@property(nonatomic) _Bool hasFullSyncVersion;

@end

