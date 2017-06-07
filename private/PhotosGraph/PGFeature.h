//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGFeature : NSObject
{
    id _typeSpecificIdentifier;
    unsigned long long _type;
    NSString *_name;
}

+ (id)stringForFeatureType:(unsigned long long)arg1;
+ (id)nameForNode:(id)arg1;
+ (id)noneFeatureWithType:(unsigned long long)arg1;
+ (id)featureWithType:(unsigned long long)arg1 name:(id)arg2;
+ (id)featureWithType:(unsigned long long)arg1 node:(id)arg2;
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)nodeInGraph:(id)arg1;
@property(readonly) _Bool isNoneFeature;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)encodedFeature;
- (id)initWithEncodedFeature:(id)arg1 graph:(id)arg2;

@end

