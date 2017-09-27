//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _EARFormatter : NSObject
{
    struct unique_ptr<SpeechITN, std::__1::default_delete<SpeechITN>> _itn;
}

+ (vector_ec3bbdac)convertStringsToQuasarTokens:(id)arg1;
+ (_Bool)supportedByQuasarConfig:(id)arg1;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)formattedRecognitionWithNBestList:(id)arg1;
- (id)formattedStringWithStrings:(id)arg1;
- (basic_string_805fe43b)getOrthography:(const vector_ec3bbdac *)arg1;
- (vector_ec3bbdac)formatWords:(vector_ec3bbdac)arg1;
- (id)initWithGeneralVoc:(id)arg1 withLexiconEnh:(id)arg2 withItnEnh:(id)arg3;
- (id)initWithQuasarConfig:(id)arg1;
- (id)initWithLanguage:(id)arg1 withSdapiConfig:(id)arg2 quasarConfig:(id)arg3;

@end

