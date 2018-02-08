//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface PETMetadata : PBCodable <NSCopying>
{
    unsigned long long _uploadTime;
    NSString *_build;
    NSString *_country;
    NSString *_device;
    NSString *_language;
    int _msgType;
    NSString *_platform;
    _Bool _isGm;
    _Bool _isInternal;
    _Bool _isSeed;
    struct {
        unsigned int uploadTime:1;
        unsigned int msgType:1;
        unsigned int isGm:1;
        unsigned int isInternal:1;
        unsigned int isSeed:1;
    } _has;
}

@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) _Bool isGm; // @synthesize isGm=_isGm;
@property(nonatomic) _Bool isSeed; // @synthesize isSeed=_isSeed;
@property(nonatomic) _Bool isInternal; // @synthesize isInternal=_isInternal;
@property(retain, nonatomic) NSString *build; // @synthesize build=_build;
@property(retain, nonatomic) NSString *device; // @synthesize device=_device;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) unsigned long long uploadTime; // @synthesize uploadTime=_uploadTime;
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
@property(readonly, nonatomic) _Bool hasLanguage;
@property(readonly, nonatomic) _Bool hasCountry;
@property(nonatomic) _Bool hasIsGm;
@property(nonatomic) _Bool hasIsSeed;
@property(nonatomic) _Bool hasIsInternal;
@property(readonly, nonatomic) _Bool hasBuild;
@property(readonly, nonatomic) _Bool hasDevice;
@property(readonly, nonatomic) _Bool hasPlatform;
@property(nonatomic) _Bool hasUploadTime;
- (int)StringAsMsgType:(id)arg1;
- (id)msgTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMsgType;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;

@end
