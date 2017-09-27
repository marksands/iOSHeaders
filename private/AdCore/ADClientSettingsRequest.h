//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface ADClientSettingsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_currentSettingParams;
    NSString *_iAdIDString;
}

+ (Class)currentSettingParamsType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *currentSettingParams; // @synthesize currentSettingParams=_currentSettingParams;
@property(retain, nonatomic) NSString *iAdIDString; // @synthesize iAdIDString=_iAdIDString;
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
- (id)currentSettingParamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentSettingParamsCount;
- (void)addCurrentSettingParams:(id)arg1;
- (void)clearCurrentSettingParams;
@property(readonly, nonatomic) _Bool hasIAdIDString;

@end

