//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSAttributedString, NSMutableAttributedString;

__attribute__((visibility("hidden")))
@interface _MKMultiPartLabelMetrics : NSObject
{
    NSAttributedString *_originalAttributedString;
    NSArray *_separators;
    NSArray *_components;
    NSMutableAttributedString *_attributedString;
    unsigned long long _currentSeparatorIndex;
}

@property(nonatomic) unsigned long long currentSeparatorIndex; // @synthesize currentSeparatorIndex=_currentSeparatorIndex;
@property(readonly, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(readonly, copy, nonatomic) NSArray *separators; // @synthesize separators=_separators;
@property(readonly, copy, nonatomic) NSAttributedString *originalAttributedString; // @synthesize originalAttributedString=_originalAttributedString;
- (void).cxx_destruct;
- (void)reset;
- (_Bool)_shiftLocationOfStrings:(id)arg1 startingAtIndex:(unsigned long long)arg2 shiftValue:(long long)arg3;
- (_Bool)replaceSeparatorAtIndex:(unsigned long long)arg1 withString:(id)arg2;
- (id)initWithMultiPartString:(id)arg1;

@end

