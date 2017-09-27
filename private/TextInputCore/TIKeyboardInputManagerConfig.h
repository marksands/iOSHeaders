//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TIInputMode;

@interface TIKeyboardInputManagerConfig : NSObject
{
    _Bool _allowsSpaceCorrections;
    _Bool _usesTextChecker;
    _Bool _usesRetrocorrection;
    _Bool _usesWordNgramModel;
    _Bool _usesAdaptation;
    _Bool _completionsShouldSharePrefix;
    _Bool _testing;
    TIInputMode *_inputMode;
    NSString *_staticDictionaryPath;
    NSString *_dynamicResourcePath;
    NSString *_ngramModelPath;
    unsigned long long _maxWordsPerPrediction;
}

+ (id)configurationForInputMode:(id)arg1;
@property(nonatomic, getter=isTesting) _Bool testing; // @synthesize testing=_testing;
@property(nonatomic) _Bool completionsShouldSharePrefix; // @synthesize completionsShouldSharePrefix=_completionsShouldSharePrefix;
@property(nonatomic) unsigned long long maxWordsPerPrediction; // @synthesize maxWordsPerPrediction=_maxWordsPerPrediction;
@property(nonatomic) _Bool usesAdaptation; // @synthesize usesAdaptation=_usesAdaptation;
@property(nonatomic) _Bool usesWordNgramModel; // @synthesize usesWordNgramModel=_usesWordNgramModel;
@property(nonatomic) _Bool usesRetrocorrection; // @synthesize usesRetrocorrection=_usesRetrocorrection;
@property(nonatomic) _Bool usesTextChecker; // @synthesize usesTextChecker=_usesTextChecker;
@property(nonatomic) _Bool allowsSpaceCorrections; // @synthesize allowsSpaceCorrections=_allowsSpaceCorrections;
@property(copy, nonatomic) NSString *ngramModelPath; // @synthesize ngramModelPath=_ngramModelPath;
@property(copy, nonatomic) NSString *dynamicResourcePath; // @synthesize dynamicResourcePath=_dynamicResourcePath;
@property(copy, nonatomic) NSString *staticDictionaryPath; // @synthesize staticDictionaryPath=_staticDictionaryPath;
@property(retain, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
- (id)propertyList;
@property(nonatomic) _Bool usesWordNgramModelAdaptation;
- (void)dealloc;

@end

