//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VSTextPreProcessorRule : NSObject
{
    NSString *_matchPattern;
    NSString *_replacement;
    _Bool _caseSensitive;
    _Bool _eatPunctuation;
}

- (id)matchedString:(id)arg1 forTokenInRange:(CDStruct_912cb5d2 *)arg2;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

