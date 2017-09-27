//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPShareIdentifier, NSData;

__attribute__((visibility("hidden")))
@interface CKDPCommentedOnId : PBCodable <NSCopying>
{
    NSData *_itemId;
    CKDPShareIdentifier *_shareIdentifier;
}

@property(retain, nonatomic) NSData *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) CKDPShareIdentifier *shareIdentifier; // @synthesize shareIdentifier=_shareIdentifier;
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
@property(readonly, nonatomic) _Bool hasItemId;
@property(readonly, nonatomic) _Bool hasShareIdentifier;

@end

