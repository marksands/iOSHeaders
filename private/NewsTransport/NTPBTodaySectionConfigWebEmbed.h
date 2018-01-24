//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface NTPBTodaySectionConfigWebEmbed : PBCodable <NSCopying>
{
    unsigned long long _preferredSlotAllocation;
    NSMutableArray *_embedFonts;
    NSString *_urlString;
    struct {
        unsigned int preferredSlotAllocation:1;
    } _has;
}

+ (Class)embedFontsType;
@property(nonatomic) unsigned long long preferredSlotAllocation; // @synthesize preferredSlotAllocation=_preferredSlotAllocation;
@property(retain, nonatomic) NSMutableArray *embedFonts; // @synthesize embedFonts=_embedFonts;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPreferredSlotAllocation;
- (id)embedFontsAtIndex:(unsigned long long)arg1;
- (unsigned long long)embedFontsCount;
- (void)addEmbedFonts:(id)arg1;
- (void)clearEmbedFonts;
@property(readonly, nonatomic) _Bool hasUrlString;
- (void)dealloc;

@end

