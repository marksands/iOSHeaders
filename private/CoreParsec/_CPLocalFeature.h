//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPLocalFeature-Protocol.h>

@class NSData, NSString;

@interface _CPLocalFeature : PBCodable <_CPLocalFeature, NSSecureCoding>
{
    NSString *_stringFeature;
    double _numericFeature;
    unsigned long long _whichLocal_Feature;
}

@property(readonly, nonatomic) unsigned long long whichLocal_Feature; // @synthesize whichLocal_Feature=_whichLocal_Feature;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasNumericFeature;
@property(nonatomic) double numericFeature; // @synthesize numericFeature=_numericFeature;
@property(readonly, nonatomic) _Bool hasStringFeature;
@property(copy, nonatomic) NSString *stringFeature; // @synthesize stringFeature=_stringFeature;
- (_Bool)requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

