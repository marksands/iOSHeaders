//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPReplaceTextData : NSObject
{
    NSString *_language;
    NSString *_dictationAndAutocorrection;
}

+ (id)replaceTextData;
+ (id)replaceTextDataWithDictationAndAutocorrection:(id)arg1;
+ (id)replaceTextDataWithLanguage:(id)arg1;
+ (id)replaceTextDataWithLanguage:(id)arg1 dictationAndAutocorrection:(id)arg2;
@property(readonly, copy, nonatomic) NSString *dictationAndAutocorrection; // @synthesize dictationAndAutocorrection=_dictationAndAutocorrection;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (id)replaceTextDataByChangingDictationAndAutocorrection:(id)arg1;
- (id)replaceTextDataByChangingLanguage:(id)arg1;
- (id)init;
- (id)initWithDictationAndAutocorrection:(id)arg1;
- (id)initWithLanguage:(id)arg1;
- (id)initWithLanguage:(id)arg1 dictationAndAutocorrection:(id)arg2;

@end

