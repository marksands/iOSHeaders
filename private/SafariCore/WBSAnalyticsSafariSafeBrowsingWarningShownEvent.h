//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface WBSAnalyticsSafariSafeBrowsingWarningShownEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _provider;
    struct {
        unsigned int timestamp:1;
        unsigned int provider:1;
    } _has;
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsProvider:(id)arg1;
- (id)providerAsString:(int)arg1;
@property(nonatomic) _Bool hasProvider;
@property(nonatomic) int provider; // @synthesize provider=_provider;
@property(nonatomic) _Bool hasTimestamp;

@end

