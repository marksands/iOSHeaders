//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface PBBProtoSetPasscodeRestrictions : PBCodable <NSCopying>
{
    NSData *_restrictions;
    _Bool _wristDetectionDisabled;
    struct {
        unsigned int wristDetectionDisabled:1;
    } _has;
}

@property(nonatomic) _Bool wristDetectionDisabled; // @synthesize wristDetectionDisabled=_wristDetectionDisabled;
@property(retain, nonatomic) NSData *restrictions; // @synthesize restrictions=_restrictions;
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
@property(nonatomic) _Bool hasWristDetectionDisabled;

@end

