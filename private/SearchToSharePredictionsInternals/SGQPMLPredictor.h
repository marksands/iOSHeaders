//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchToSharePredictionsInternals/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSDictionary, NSString, PMLHashingVectorizer, SGQPMultiLabelModel;

@interface SGQPMLPredictor : NSObject <PMLPlistAndChunksSerializableProtocol>
{
    PMLHashingVectorizer *_vectorizer;
    SGQPMultiLabelModel *_multiLabelModel;
    NSDictionary *_categoryNameForLabel;
}

+ (id)predictorFromAsset:(id)arg1;
- (void).cxx_destruct;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)predictionsForMessages:(id)arg1;
- (id)initWithVectorizer:(id)arg1 multiLabelModel:(id)arg2 labelMap:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

