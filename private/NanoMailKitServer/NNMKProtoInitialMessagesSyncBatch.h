//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface NNMKProtoInitialMessagesSyncBatch : PBCodable <NSCopying>
{
    unsigned int _fullSyncVersion;
    NSMutableArray *_initialMessagesSyncs;
    CDStruct_a125a100 _has;
}

+ (Class)initialMessagesSyncType;
@property(retain, nonatomic) NSMutableArray *initialMessagesSyncs; // @synthesize initialMessagesSyncs=_initialMessagesSyncs;
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
- (id)initialMessagesSyncAtIndex:(unsigned long long)arg1;
- (unsigned long long)initialMessagesSyncsCount;
- (void)addInitialMessagesSync:(id)arg1;
- (void)clearInitialMessagesSyncs;
@property(nonatomic) _Bool hasFullSyncVersion;

@end

