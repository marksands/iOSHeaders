//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NPKProtoHash, NSMutableArray;

@interface NPKProtoResyncNeededRequest : PBRequest <NSCopying>
{
    NPKProtoHash *_expectedHash;
    NSMutableArray *_manifestHashes;
    unsigned int _resyncID;
    NSMutableArray *_uniqueIDs;
    _Bool _fullResyncNeeded;
    struct {
        unsigned int resyncID:1;
        unsigned int fullResyncNeeded:1;
    } _has;
}

+ (Class)manifestHashesType;
+ (Class)uniqueIDsType;
@property(nonatomic) unsigned int resyncID; // @synthesize resyncID=_resyncID;
@property(nonatomic) _Bool fullResyncNeeded; // @synthesize fullResyncNeeded=_fullResyncNeeded;
@property(retain, nonatomic) NSMutableArray *manifestHashes; // @synthesize manifestHashes=_manifestHashes;
@property(retain, nonatomic) NSMutableArray *uniqueIDs; // @synthesize uniqueIDs=_uniqueIDs;
@property(retain, nonatomic) NPKProtoHash *expectedHash; // @synthesize expectedHash=_expectedHash;
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
@property(nonatomic) _Bool hasResyncID;
@property(nonatomic) _Bool hasFullResyncNeeded;
- (id)manifestHashesAtIndex:(unsigned long long)arg1;
- (unsigned long long)manifestHashesCount;
- (void)addManifestHashes:(id)arg1;
- (void)clearManifestHashes;
- (id)uniqueIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uniqueIDsCount;
- (void)addUniqueIDs:(id)arg1;
- (void)clearUniqueIDs;
@property(readonly, nonatomic) _Bool hasExpectedHash;

@end

