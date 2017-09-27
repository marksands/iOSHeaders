//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPFetchArchivedRecordsResponse : PBCodable <NSCopying>
{
    NSData *_archiveContinuationToken;
    NSMutableArray *_records;
    int _status;
    CDStruct_47fe53f2 _has;
}

+ (Class)recordType;
@property(retain, nonatomic) NSData *archiveContinuationToken; // @synthesize archiveContinuationToken=_archiveContinuationToken;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
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
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasArchiveContinuationToken;
- (id)recordAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)addRecord:(id)arg1;
- (void)clearRecords;

@end

