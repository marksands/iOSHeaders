//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUSetting.h>

@class NSDictionary;

@interface NUCompoundSetting : NUSetting
{
    struct NSDictionary *_properties;
}

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)supportedAttributes;
@property(readonly) NSDictionary *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)modelForProperty:(id)arg1;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (id)copy:(id)arg1;
- (_Bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
- (_Bool)isValid:(out id *)arg1;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (id)description;
- (id)initWithProperties:(struct NSDictionary *)arg1 attributes:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (id)init;

@end

