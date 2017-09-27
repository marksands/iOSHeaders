//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CVML/CVMLDetector.h>

@class NSSet;

@interface CVMLSceneClassifier : CVMLDetector
{
    struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> mDescriptorProcessor;
    struct shared_ptr<vision::mod::ImageClassifierAbstract> mClassifier;
    struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> mHierarchicalClassifier;
    NSSet *mBlacklistedTerms;
}

+ (_Bool)shouldDumpDebugIntermediates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getLabels;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end

