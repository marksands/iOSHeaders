//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface NTPBPrefetchConfig : PBCodable <NSCopying>
{
    double _backgroundFetchMinimumInterval;
    long long _feedPrefetchFavoritesLimit;
    _Bool _backgroundFetchEnabled;
    _Bool _feedPrefetchForYou;
    struct {
        unsigned int backgroundFetchMinimumInterval:1;
        unsigned int feedPrefetchFavoritesLimit:1;
        unsigned int backgroundFetchEnabled:1;
        unsigned int feedPrefetchForYou:1;
    } _has;
}

@property(nonatomic) long long feedPrefetchFavoritesLimit; // @synthesize feedPrefetchFavoritesLimit=_feedPrefetchFavoritesLimit;
@property(nonatomic) _Bool feedPrefetchForYou; // @synthesize feedPrefetchForYou=_feedPrefetchForYou;
@property(nonatomic) double backgroundFetchMinimumInterval; // @synthesize backgroundFetchMinimumInterval=_backgroundFetchMinimumInterval;
@property(nonatomic) _Bool backgroundFetchEnabled; // @synthesize backgroundFetchEnabled=_backgroundFetchEnabled;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFeedPrefetchFavoritesLimit;
@property(nonatomic) _Bool hasFeedPrefetchForYou;
@property(nonatomic) _Bool hasBackgroundFetchMinimumInterval;
@property(nonatomic) _Bool hasBackgroundFetchEnabled;

@end

