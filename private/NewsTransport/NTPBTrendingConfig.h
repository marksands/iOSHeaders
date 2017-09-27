//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface NTPBTrendingConfig : PBCodable <NSCopying>
{
    NSString *_fallbackLanguageTag;
    NSMutableArray *_languageConfigs;
}

+ (Class)languageConfigsType;
@property(retain, nonatomic) NSMutableArray *languageConfigs; // @synthesize languageConfigs=_languageConfigs;
@property(retain, nonatomic) NSString *fallbackLanguageTag; // @synthesize fallbackLanguageTag=_fallbackLanguageTag;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)languageConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)languageConfigsCount;
- (void)addLanguageConfigs:(id)arg1;
- (void)clearLanguageConfigs;
@property(readonly, nonatomic) _Bool hasFallbackLanguageTag;

@end

