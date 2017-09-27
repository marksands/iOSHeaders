//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface RKText : NSObject
{
    _Bool _trainVerbatim;
    NSString *_string;
    NSString *_languageID;
    double _trainingWeight;
    NSMutableArray *_annotations;
    NSString *_processedText;
}

+ (_Bool)canClassifyPolarityForLanguageIdentifier:(id)arg1 withOptions:(unsigned long long)arg2 dataProvider:(id)arg3;
+ (_Bool)canClassifyPolarityForLanguageIdentifier:(id)arg1 withOptions:(unsigned long long)arg2;
+ (unsigned long long)polarityTypeFromName:(id)arg1;
+ (id)polarityNameFromType:(unsigned long long)arg1;
+ (unsigned long long)annotationTypeFromName:(id)arg1;
+ (id)annotationNameFromType:(unsigned long long)arg1;
+ (void)initialize;
+ (id)defaultDataProvider;
@property(retain) NSString *processedText; // @synthesize processedText=_processedText;
@property(retain) NSMutableArray *annotations; // @synthesize annotations=_annotations;
@property _Bool trainVerbatim; // @synthesize trainVerbatim=_trainVerbatim;
@property double trainingWeight; // @synthesize trainingWeight=_trainingWeight;
@property(retain) NSString *languageID; // @synthesize languageID=_languageID;
@property(retain) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (unsigned long long)polarityClassificationWithOptions:(unsigned long long)arg1 dataProvider:(id)arg2;
- (unsigned long long)polarityClassificationWithOptions:(unsigned long long)arg1;
- (id)lsmText;
- (id)taggedText;
- (unsigned long long)annotatedPolarity;
- (id)subTextsByPolarity;
- (id)subTextWithRange:(struct _NSRange)arg1;
- (_Bool)cleanupData;
- (void)enumerateAnnotationsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)annotateRange:(struct _NSRange)arg1 type:(unsigned long long)arg2 machineGenerated:(_Bool)arg3;
- (void)annotateRange:(struct _NSRange)arg1 type:(unsigned long long)arg2;
- (id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2 trainingWeight:(double)arg3 trainVerbatim:(_Bool)arg4;
- (id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2;
- (id)init;

@end

