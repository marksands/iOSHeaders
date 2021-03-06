//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, PHSuggestion, PHSuggestionMessageContext;

@interface PHSuggestionMessageMatchingResult : NSObject
{
    PHSuggestion *_suggestion;
    PHSuggestionMessageContext *_messageContext;
    NSMutableDictionary *_scoreByCMMSuggestionMatchingType;
}

@property(retain, nonatomic) NSMutableDictionary *scoreByCMMSuggestionMatchingType; // @synthesize scoreByCMMSuggestionMatchingType=_scoreByCMMSuggestionMatchingType;
@property(retain, nonatomic) PHSuggestionMessageContext *messageContext; // @synthesize messageContext=_messageContext;
@property(retain, nonatomic) PHSuggestion *suggestion; // @synthesize suggestion=_suggestion;
- (void).cxx_destruct;
- (double)scoreForSuggestionMatchingType:(long long)arg1;
- (void)registerMatchingType:(long long)arg1 weight:(double)arg2;
- (id)initWithSuggestion:(id)arg1 messageContext:(id)arg2;

@end

