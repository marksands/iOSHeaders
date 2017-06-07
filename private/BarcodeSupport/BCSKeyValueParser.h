//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BCSKeyValueParser : NSObject
{
    NSString *_string;
    unsigned long long _currentIndex;
    unsigned long long _stringLength;
    NSMutableDictionary *_keyValuePairs;
}

- (void).cxx_destruct;
- (unsigned long long)_numberOfPreviousBackSlashesFromIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;
- (unsigned long long)_indexOfDelimiter:(id)arg1 range:(struct _NSRange)arg2;
- (_Bool)_parseNextKeyValuePair;
@property(readonly, copy, nonatomic) NSDictionary *keyValuePairs;
- (id)initWithString:(id)arg1 startIndex:(unsigned long long)arg2;

@end

