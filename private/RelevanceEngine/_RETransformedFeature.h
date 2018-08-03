//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/REFeature.h>

#import "REIndentedDescription.h"

@class NSString, REFeatureSet, REFeatureTransformer;

@interface _RETransformedFeature : REFeature <REIndentedDescription>
{
    NSString *_name;
    REFeatureSet *_rootFeatures;
    REFeatureSet *_features;
    REFeatureTransformer *_transformer;
}

@property(readonly, nonatomic) REFeatureTransformer *transformer; // @synthesize transformer=_transformer;
@property(readonly, nonatomic) REFeatureSet *features; // @synthesize features=_features;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2;
- (id)_dependentFeatures;
- (id)_rootFeatures;
- (long long)_bitCount;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)featureType;
- (id)name;
- (id)initWithTransformer:(id)arg1 features:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

