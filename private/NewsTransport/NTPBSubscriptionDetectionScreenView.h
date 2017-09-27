//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying>
{
    int _countOfSubscriptionsDetected;
    struct {
        unsigned int countOfSubscriptionsDetected:1;
    } _has;
}

@property(nonatomic) int countOfSubscriptionsDetected; // @synthesize countOfSubscriptionsDetected=_countOfSubscriptionsDetected;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCountOfSubscriptionsDetected;

@end

