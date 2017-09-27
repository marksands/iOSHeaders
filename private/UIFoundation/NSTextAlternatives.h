//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface NSTextAlternatives : NSObject
{
    NSString *_primaryString;
    NSArray *_alternativeStrings;
    id _internal;
}

- (id)identifier;
- (id)alternativeAtIndex:(unsigned long long)arg1;
- (id)alternatives;
- (unsigned long long)numberOfAlternatives;
- (id)originalText;
- (void)noteSelectedAlternativeString:(id)arg1;
@property(readonly) NSArray *alternativeStrings;
@property(readonly) NSString *primaryString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 identifier:(id)arg3;
- (id)initWithOriginalText:(id)arg1 alternatives:(id)arg2;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2;

@end

