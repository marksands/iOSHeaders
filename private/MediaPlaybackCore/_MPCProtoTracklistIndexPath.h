//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface _MPCProtoTracklistIndexPath : PBCodable <NSCopying>
{
    long long _containerIndex;
    long long _itemIndex;
    struct {
        unsigned int containerIndex:1;
        unsigned int itemIndex:1;
    } _has;
}

@property(nonatomic) long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property(nonatomic) long long containerIndex; // @synthesize containerIndex=_containerIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasItemIndex;
@property(nonatomic) _Bool hasContainerIndex;

@end

