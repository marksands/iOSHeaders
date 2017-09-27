//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreML/MLModel.h>

#import "MLModelSpecificationLoader.h"

@class MLFeatureValue, NSDictionary;

@interface MLCategoricalMapping : MLModel <MLModelSpecificationLoader>
{
    NSDictionary *_mapping;
    MLFeatureValue *_valueOnUnknown;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
@property(readonly, nonatomic) MLFeatureValue *valueOnUnknown; // @synthesize valueOnUnknown=_valueOnUnknown;
@property(readonly, nonatomic) NSDictionary *mapping; // @synthesize mapping=_mapping;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithMapping:(id)arg1 valueOnUnknown:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7;

@end

