//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_recordVersions;
    _Bool _isDeleted;
    struct {
        unsigned int isDeleted:1;
    } _has;
}

+ (Class)recordVersionsType;
@property(retain, nonatomic) NSMutableArray *recordVersions; // @synthesize recordVersions=_recordVersions;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
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
- (id)recordVersionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordVersionsCount;
- (void)addRecordVersions:(id)arg1;
- (void)clearRecordVersions;
@property(nonatomic) _Bool hasIsDeleted;

@end

