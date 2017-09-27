//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HFAggregatedCharacteristicValueSource.h"

@class NSMutableDictionary, NSSet, NSString;

@interface HFMultiServiceAggregatedCharacteristicValueSource : NSObject <HFAggregatedCharacteristicValueSource>
{
    id <HFCharacteristicValueSource> _valueSource;
    NSSet *_services;
    NSMutableDictionary *_characteristicsByType;
}

+ (id)na_identity;
@property(readonly, nonatomic) NSMutableDictionary *characteristicsByType; // @synthesize characteristicsByType=_characteristicsByType;
@property(readonly, copy, nonatomic) NSSet *services; // @synthesize services=_services;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)commitTransactionWithReason:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)allCharacteristicsForCharacteristicType:(id)arg1;
- (id)metadataForCharacteristicType:(id)arg1;
- (id)writeValuesForCharacteristicTypes:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValueSource:(id)arg1 services:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

