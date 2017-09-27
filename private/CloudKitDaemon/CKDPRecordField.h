//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

@interface CKDPRecordField : PBCodable <NSCopying>
{
    CKDPRecordFieldIdentifier *_identifier;
    CKDPRecordFieldValue *_value;
}

+ (id)emptyFieldWithKey:(id)arg1;
@property(retain, nonatomic) CKDPRecordFieldValue *value; // @synthesize value=_value;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *identifier; // @synthesize identifier=_identifier;
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
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end

