//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputCore/TILanguageModelOfflineLearningHandle.h>

@interface TILanguageModelOfflineLearningHandleFavonius : TILanguageModelOfflineLearningHandle
{
    RefPtr_9bddf3b2 _dictionaries;
    shared_ptr_e9f752ce _currentModel;
}

@property(readonly, nonatomic) RefPtr_9bddf3b2 dictionaries; // @synthesize dictionaries=_dictionaries;
@property(nonatomic) shared_ptr_e9f752ce currentModel; // @synthesize currentModel=_currentModel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didFinishLearning;
- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;
- (void)load;
- (void)updateAdaptationContext:(id)arg1;
- (id)initWithInputMode:(id)arg1;

@end

