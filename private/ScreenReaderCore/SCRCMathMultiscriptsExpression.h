//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SCRCMathMultiscriptsExpression : SCRCMathExpression
{
    SCRCMathExpression *_base;
    NSArray *_postScripts;
    NSArray *_preScripts;
}

@property(retain, nonatomic) NSArray *preScripts; // @synthesize preScripts=_preScripts;
@property(retain, nonatomic) NSArray *postScripts; // @synthesize postScripts=_postScripts;
@property(retain, nonatomic) SCRCMathExpression *base; // @synthesize base=_base;
- (void).cxx_destruct;
- (void)_subSuperScriptsDescriptionFromArray:(id)arg1 withSpeakingStyle:(int)arg2 arePausesAllowed:(_Bool)arg3 outSubscripts:(id *)arg4 outSuperscripts:(id *)arg5;
- (id)_appendString:(id)arg1 toDescription:(id)arg2 arePausesAllowed:(_Bool)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2;
- (id)description;
- (id)_subSuperscriptPairFromDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

