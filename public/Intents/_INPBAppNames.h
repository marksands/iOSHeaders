//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBAppNames.h"

@class NSString;

@interface _INPBAppNames : PBCodable <_INPBAppNames, NSSecureCoding, NSCopying>
{
    struct _has;
    NSString *_appName;
    NSString *_axSpokenName;
    NSString *_displayName;
    NSString *_spotlightName;
}

@property(copy, nonatomic) NSString *spotlightName; // @synthesize spotlightName=_spotlightName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *axSpokenName; // @synthesize axSpokenName=_axSpokenName;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasSpotlightName;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasAxSpokenName;
@property(readonly, nonatomic) _Bool hasAppName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

