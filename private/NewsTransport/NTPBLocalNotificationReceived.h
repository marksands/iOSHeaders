//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface NTPBLocalNotificationReceived : PBCodable <NSCopying>
{
    int _localNotificationNumberReceived;
    struct {
        unsigned int localNotificationNumberReceived:1;
    } _has;
}

@property(nonatomic) int localNotificationNumberReceived; // @synthesize localNotificationNumberReceived=_localNotificationNumberReceived;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLocalNotificationNumberReceived;

@end

