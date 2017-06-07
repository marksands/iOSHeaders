//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPMLDB, CPMLModel, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface PRSModel : NSObject
{
    NSString *_modelName;
    NSArray *_featureSet;
    CPMLDB *_trainingModel;
    CPMLModel *_predictionModel;
    NSObject<OS_dispatch_queue> *_corePredictionQueue;
    NSString *_modelDBFilePath;
    NSString *_trainingDBFilePath;
    NSString *_configFilePath;
}

@property(retain) NSString *configFilePath; // @synthesize configFilePath=_configFilePath;
@property(retain) NSString *trainingDBFilePath; // @synthesize trainingDBFilePath=_trainingDBFilePath;
@property(retain) NSString *modelDBFilePath; // @synthesize modelDBFilePath=_modelDBFilePath;
@property(retain) NSObject<OS_dispatch_queue> *corePredictionQueue; // @synthesize corePredictionQueue=_corePredictionQueue;
@property(retain) CPMLModel *predictionModel; // @synthesize predictionModel=_predictionModel;
@property(retain) CPMLDB *trainingModel; // @synthesize trainingModel=_trainingModel;
@property(retain) NSArray *featureSet; // @synthesize featureSet=_featureSet;
@property(retain) NSString *modelName; // @synthesize modelName=_modelName;
- (void).cxx_destruct;
- (id)getTopHitForQuery:(id)arg1 results:(id)arg2;
- (void)purgeDataOlderThanTime:(double)arg1;
- (void)purgeAllData;
- (void)addResultToTrainingData:(id)arg1 query:(id)arg2;
- (void)updateModel;
- (id)getConfigFilePath;
- (void)initPredictionModel;
- (id)initWithTrainingDBFilePath:(id)arg1 modelDBFilePath:(id)arg2 className:(id)arg3;

@end

