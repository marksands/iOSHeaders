//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class AVMetadataItemInternal, NSData, NSDate, NSDictionary, NSLocale, NSNumber, NSString;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying>
{
    AVMetadataItemInternal *_priv;
}

+ (id)dataTypeForValue:(id)arg1;
+ (id)_figMetadataPropertyFromMetadataItems:(id)arg1;
+ (id)_replaceQuickTimeUserDataKeySpaceWithISOUserDataKeySpaceIfRequired:(id)arg1;
+ (id)_isoUserDataKeysRequiringKeySpaceConversion;
+ (_Bool)_clientExpectsISOUserDataKeysInQuickTimeUserDataKeySpace;
+ (id)_metadataItemWithFigMetadataDictionary:(id)arg1 containerURL:(id)arg2 securityOptions:(unsigned int)arg3;
+ (id)_metadataItemWithFigMetadataDictionary:(id)arg1;
+ (id)keySpaceForIdentifier:(id)arg1;
+ (id)keyForIdentifier:(id)arg1;
+ (id)identifierForKey:(id)arg1 keySpace:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredByMetadataItemFilter:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withStringValue:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3;
+ (id)metadataItemsFromArray:(id)arg1 filteredByIdentifier:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2;
+ (void)initialize;
+ (id)metadataItemsFromArray:(id)arg1 filteredByIdentifiers:(id)arg2;
+ (id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(CDUnknownBlockType)arg2;
- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)_conformingDataTypes;
@property(readonly, copy, nonatomic) NSDictionary *extraAttributes;
- (id)_serializationDataType;
@property(readonly, copy, nonatomic) NSString *dataType;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> value;
- (id)discoveryTimestamp;
- (id)startDate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 time;
- (id)unicodeLanguageCode;
- (id)languageCode;
- (id)unicodeLanguageIdentifier;
@property(readonly, copy, nonatomic) NSString *extendedLanguageTag;
@property(readonly, copy, nonatomic) NSLocale *locale;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)keySpace;
- (id)commonKey;
- (id)key;
- (id)_createJSONEncodedDataFromValue:(id)arg1 error:(id *)arg2;
- (void *)_copyValueAsCFTypeWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 error:(id *)arg2;
- (id)_figMetadataSpecificationReturningError:(id *)arg1;
- (id)_figMetadataFormat;
- (id)_figMetadataDictionary;
- (id)_figMetadataDictionaryWithValue:(_Bool)arg1 diviningValueDataType:(_Bool)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_areExtraAttributesOf:(id)arg1 comparableToExtraAttributesOf:(id)arg2;
- (id)intrinsicAttributesOfExtraAttributes:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)_initWithFigMetadataDictionary:(id)arg1;
- (id)_initWithReader:(struct OpaqueFigMetadataReader *)arg1 itemIndex:(long long)arg2;
- (id)init;
- (id)_keyAsString;
- (void)_extractPropertiesFromDictionary:(id)arg1;
- (void)_updateLanguageInformationFromExtendedLanguageTag:(id)arg1;
- (void)_updateLanguageInformationFromLocale:(id)arg1;
- (void)_updateIdentifier;
- (void)_updateCommonKey;
- (void)_makePropertiesReady;
- (id)_valueFromCFType:(void *)arg1;
- (void)_makeValueReady;
- (struct CGImage *)imageValue;
@property(readonly, nonatomic) NSData *dataValue;
@property(readonly, nonatomic) NSDate *dateValue;
@property(readonly, nonatomic) NSNumber *numberValue;
@property(readonly, nonatomic) NSString *stringValue;

@end

