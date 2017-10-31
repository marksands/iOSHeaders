//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDHomeKitAssistantAccessControl : PBCodable <NSCopying>
{
    unsigned long long _numCapableAccessories;
    unsigned long long _numEnabledAccessories;
    unsigned long long _options;
    unsigned long long _timestamp;
    _Bool _isEnabled;
    struct {
        unsigned int numCapableAccessories:1;
        unsigned int numEnabledAccessories:1;
        unsigned int options:1;
        unsigned int timestamp:1;
        unsigned int isEnabled:1;
    } _has;
}

@property(nonatomic) unsigned long long numCapableAccessories; // @synthesize numCapableAccessories=_numCapableAccessories;
@property(nonatomic) unsigned long long numEnabledAccessories; // @synthesize numEnabledAccessories=_numEnabledAccessories;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
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
@property(nonatomic) _Bool hasNumCapableAccessories;
@property(nonatomic) _Bool hasNumEnabledAccessories;
@property(nonatomic) _Bool hasOptions;
@property(nonatomic) _Bool hasIsEnabled;
@property(nonatomic) _Bool hasTimestamp;

@end
