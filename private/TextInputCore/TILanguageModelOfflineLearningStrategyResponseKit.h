//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TILanguageModelOfflineLearningStrategy.h"

@class NSMutableDictionary, NSString, NSURL, RKMessageResponseManager, TILanguageModelOfflineLearningTask;

@interface TILanguageModelOfflineLearningStrategyResponseKit : NSObject <TILanguageModelOfflineLearningStrategy>
{
    NSMutableDictionary *_recipientModels;
    NSURL *_directory;
    RKMessageResponseManager *_trainer;
    TILanguageModelOfflineLearningTask *_learningTask;
}

@property(readonly) TILanguageModelOfflineLearningTask *learningTask; // @synthesize learningTask=_learningTask;
- (void).cxx_destruct;
- (void)didFinishLearning;
- (id)filterMessages:(id)arg1;
- (_Bool)learnMessages:(id)arg1 withRecipientRecords:(id)arg2;
- (id)messagesClusteredByRecipient:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1 andDirectory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

