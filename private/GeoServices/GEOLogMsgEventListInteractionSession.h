//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOLogMsgEventListInteractionSession : PBCodable <NSCopying>
{
    NSMutableArray *_listResultItems;
    int _listType;
    NSString *_searchString;
    struct {
        unsigned int listType:1;
    } _has;
}

+ (Class)listResultItemType;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) NSMutableArray *listResultItems; // @synthesize listResultItems=_listResultItems;
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
@property(readonly, nonatomic) _Bool hasSearchString;
- (id)listResultItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)listResultItemsCount;
- (void)addListResultItem:(id)arg1;
- (void)clearListResultItems;
- (int)StringAsListType:(id)arg1;
- (id)listTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasListType;
@property(nonatomic) int listType; // @synthesize listType=_listType;

@end

