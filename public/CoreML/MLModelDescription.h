//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MLModelDescription : NSObject
{
    NSDictionary *_inputDescriptionsByName;
    NSDictionary *_outputDescriptionsByName;
    NSString *_predictedFeatureName;
    NSString *_predictedProbabilitiesName;
    NSDictionary *_metadata;
}

@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *predictedProbabilitiesName; // @synthesize predictedProbabilitiesName=_predictedProbabilitiesName;
@property(readonly, copy, nonatomic) NSString *predictedFeatureName; // @synthesize predictedFeatureName=_predictedFeatureName;
@property(readonly, nonatomic) NSDictionary *outputDescriptionsByName; // @synthesize outputDescriptionsByName=_outputDescriptionsByName;
@property(readonly, nonatomic) NSDictionary *inputDescriptionsByName; // @synthesize inputDescriptionsByName=_inputDescriptionsByName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 metadata:(id)arg5;
- (id)debugQuickLookObject;

@end

