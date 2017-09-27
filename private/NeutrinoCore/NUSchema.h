//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUModel.h>

@class NUIdentifier;

@interface NUSchema : NUModel
{
    NUIdentifier *_identifier;
}

+ (id)deserializeSchemaFromArray:(id)arg1 error:(out id *)arg2;
+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)deserializeItem:(id)arg1 schemaIdentifier:(id)arg2 error:(out id *)arg3;
+ (id)serializeItem:(id)arg1 schemaIdentifier:(id)arg2 error:(out id *)arg3;
+ (id)deserializeIdentifiableItem:(id)arg1 error:(out id *)arg2;
+ (id)serializeIdentifiableItem:(id)arg1 error:(out id *)arg2;
+ (id)makeJSValueForIdentifiableItem:(id)arg1 context:(id)arg2 error:(out id *)arg3;
+ (struct NSDictionary *)deserializeContentsFromDictionary:(id)arg1 error:(out id *)arg2;
+ (_Bool)serializeMediaType:(long long)arg1 intoDictionary:(id)arg2 error:(out id *)arg3;
+ (long long)deserializeMediaTypeFromDictionary:(id)arg1;
+ (id)deserializeIdentifierFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)copyItem:(id)arg1 schemaIdentifier:(id)arg2;
+ (id)copyIdentifiableItem:(id)arg1;
+ (_Bool)validateIdentifiable:(id)arg1 type:(long long)arg2 error:(out id *)arg3;
+ (_Bool)validateIdentifiable:(id)arg1 error:(out id *)arg2;
+ (long long)schemaTypeFromString:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateSchemaType:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateSchemaIdentifier:(id)arg1 type:(long long)arg2 error:(out id *)arg3;
+ (id)reservedPropertyNames;
@property(readonly, nonatomic) NUIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (struct NSArray *)schemaDependencies;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)description;
- (_Bool)deserializeIdentifierFromDictionary:(id)arg1 error:(out id *)arg2;
- (_Bool)serializeIdentifier:(id)arg1 intoDictionary:(id)arg2 error:(out id *)arg3;
- (_Bool)validateIdentifier:(id)arg1 error:(out id *)arg2;
- (_Bool)isValid:(out id *)arg1;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributes:(id)arg1;
@property(readonly, nonatomic) long long type;

@end

